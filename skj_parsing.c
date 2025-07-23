#include "skj_parsing.h"

#define CPE_Digits 				0x02
#define CPE_FirstDigitReport 			0x0E
#define CPE_Answer 				0x20
#define CPE_OutpulsingComplete 			0x22
#define CPE_RecordedAnnouncementComplete	0x26
#define CPE_FileNotFound			0x2F


char int2char(unsigned int i) {
        if(i >= 0 && i <= 9) {
                return i + '0';
        } else if(i >= 10 && i <= 15) {
                return i - 10 + 'A';
        }
	printf("int2char got %u\n", i);
        return '0';
}

int check_channel_AIB(UBYTE *aib) {
	if(aib[0] == 0 && aib[2] == 0x0d) {
		return 1;
	}
	if(aib[0] == 1 && aib[1] == 2 && aib[2] == 0x0d && aib[7] == 0x0d) {
		return 2;
	}
	return 0;
}

int write_span_channel_from_AIB(char *dest, int size, UBYTE *aib) {
	return snprintf(dest, size, ", \"span\": %u, \"channel\": %u", 
		aib[4] * 0xFF + aib[5],
		aib[6]
	);
}

int write_spana_channela_spanb_channelb_from_AIB(char *dest, int size, UBYTE *aib) {
	return snprintf(dest, size, ", \"spanA\": %u, \"channelA\": %u, \"spanB\": %u, \"channelB\": %u",
		aib[4] * 0xFF + aib[5],
		aib[6],
		aib[9] * 0xFF + aib[10],
		aib[11]
	);
}

int write_elements_from_AIB(char *dest, int size, UBYTE *aib) {
	int channels = check_channel_AIB(aib);
	int n;
	char *p = dest;
	if(channels == 1) {
		n = write_span_channel_from_AIB(p, size, aib);
		p += n;
		size -= n;
	} else if(channels == 2) {
		n = write_spana_channela_spanb_channelb_from_AIB(p, size, aib);
		p += n;
		size -= n;
	}
	return p - dest;
}

char *write_byte_array_string(char *dest, char *source, int size) {
	UBYTE b;
	int length = size;
	while(length > 0) {
		b = *source++;
		*dest++ = int2char(b >> 4);
		*dest++ = int2char(b & 0xF);
		--length;
	}	
	return dest;
}

int write_icb_data(unsigned char *dest, int count, unsigned char *icbs) {
	unsigned char *p;
	unsigned char icb_type;
	unsigned char icb_subtype;
	unsigned char icb_length;
	unsigned char icb_byte;

	unsigned char *icb_p;

	p = dest;
	icb_p = icbs;
	while(count > 0) {
		icb_type = *icb_p++;
		*p++ = int2char(icb_type >> 4);
		*p++ = int2char(icb_type & 0xF);
	
		icb_subtype = *icb_p++;
		*p++ = int2char(icb_subtype >> 4);
		*p++ = int2char(icb_subtype & 0xF);

		if(icb_type == 3) {
				icb_subtype = icb_subtype * 256;
				icb_subtype+= *icb_p++;
				*p++ = int2char((icb_subtype >> 4) & 0xF);
				*p++ = int2char(icb_subtype & 0xF);
		}

		icb_length = *icb_p++;
		*p++ = int2char(icb_length >> 4);
		*p++ = int2char(icb_length & 0xF);

		if(icb_type == 3) {
				icb_length = icb_length * 256;
				icb_length += *icb_p++;
				*p++ = int2char((icb_length >> 4) & 0xF);
				*p++ = int2char(icb_length & 0xF);
		}

		while(icb_length > 0) {
			icb_byte = *icb_p++;
			*p++ = int2char(icb_byte >> 4);
			*p++ = int2char(icb_byte & 0xF);
			--icb_length;
		}	
		--count;
	}
	*p = 0;
	return p - dest;
}

int parse_CallProcessingEvent(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_CallProcessingEvent *cpe = (XL_CallProcessingEvent*)msg;
	/* ToDo: we need to support notification of CPE for conferences */

	int digit_count;
	int i;
	int n;
	char *p;

	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"Span\": %u, \"Channel\": %u, \"Event\": %u", msg->Tag, cpe->Span, cpe->Channel, cpe->Event);
	p += n;
	size -= n;

	switch(cpe->Event) {
	case CPE_Digits:
		/* 
		We can have multiple stages being reported (Number Of Stages Reported).
		So to be rigorous, we would have to parse each one of them, but in practice, we will never use this and so we will assume Number Of Stages Reported is always 1
		Also, a Stage can have up to 2 strings, but again, in practice we will never require reception of more than one string.
		So we will only report the first string of the first stage
		*/
		n = snprintf(p, size, ", \"digits\": \"");
		p += n;
		size -= n;
		digit_count = cpe->Data[4];
		i = 5; /* First BCD Encoded digit pair */
		while (digit_count > 0) {
			if(digit_count == 1) {
				n = snprintf(p, size, "%x", cpe->Data[i] >> 4);
			} else {
				n = snprintf(p, size, "%0.2x", cpe->Data[i]); 
			}
			p += n;
			size -= n;
			digit_count -= n;
			i += 1;
		}
		n = snprintf(p, size, "\"}");
		p += n;
		return p - json_buffer;
	case CPE_FirstDigitReport:
		n = snprintf(p, size, ", \"digit\": \"%d\"}", cpe->Data[0]);
		p += n;
		return p - json_buffer;
	default:
		n = snprintf(p, size, "}");
		p += n;
		return p - json_buffer;
	}
}

int parse_ChannelReleased(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_ChannelReleased *cr = (XL_ChannelReleased*)msg;
	return snprintf(json_buffer, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"Span\": %u, \"Channel\": %u}",  msg->Tag, cr->Span, cr->Channel);
}

int parse_ChannelReleasedWithData(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_ChannelReleasedWithData *crwd = (XL_ChannelReleasedWithData*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"Span\": %u, \"Channel\": %u, \"ICBCount\": %u, \"ICBData\": \"", msg->Tag, crwd->Span, crwd->Channel, crwd->ICBCount);
	p += n;
	size -= n;
	n = write_icb_data(p, crwd->ICBCount, (char*)&crwd->ICBType);
	p += n;
	size -= n;
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}

int parse_DS0StatusChange(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_DS0StatusChange *ds0sc = (XL_DS0StatusChange*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u", msg->Tag);
	p += n;
	size -= n;
	n = write_elements_from_AIB(p, size, ds0sc->AddrInfo);
	p += n;
	size -= n;
	n = snprintf(p, size, ", \"ChannelStatus\": %u, \"PurgeStatus\": %u}", ds0sc->ChannelStatus, ds0sc->PurgeStatus);
	p += n;
	return p - json_buffer;
}

int parse_InterAppMsg(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	SK_InterAppMsg *iam = (SK_InterAppMsg*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"Target\": %i, \"union21\": %u, \"AckTimeout\": %u, \"Tag1\": %i, \"Tag2\": %i, \"Tag3\": %i, \"Tag4\": %i, \"AppGroupTarget\": \"%s\", \"Data\": \"", msg->Tag, iam->Target, iam->union21.UnAckedMsg, iam->AckTimeout, iam->Tag1, iam->Tag2, iam->Tag3, iam->Tag4, iam->AppGroupTarget);
	p += n;
	size -= n;
	p = write_byte_array_string(p, iam->Data, iam->DataSize);	
	size -= iam->DataSize;
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}

int parse_InterAppMsgAck(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	SK_InterAppMsgAck *iama = (SK_InterAppMsg*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg_ack\", \"context\": %u, \"tag\": %u, \"Status\": %i, \"Byte1\": %i, \"Short1\": %u, \"Tag1\": %i, \"Tag2\": %i, \"Tag3\": %i, \"Tag4\": %i, \"Data\": \"", context, msg->Tag, iama->Status, iama->Byte1, iama->Short1, iama->Tag1, iama->Tag2, iama->Tag3, iama->Tag4);
	p += n;
	size -= n;
	p = write_byte_array_string(p, iama->Data, iama->DataSize);
	size -= iama->DataSize;
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}


int parse_PPLEventIndication(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_PPLEventIndication *pplei = (XL_PPLEventIndication*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u", msg->Tag);
	p += n;
	size -= n;
	n = write_elements_from_AIB(p, size, pplei->AddrInfo);
	p += n;
	size -= n;
	n = snprintf(p, size, ", \"ComponentID\": %u, \"PPLEvent\": %u", pplei->ComponentID, pplei->PPLEvent);
	p += n;
	size -= n;
	n = snprintf(p, size, ", \"ICBCount\": %u, \"Data\": \"", pplei->ICBCount);
	p += n;
	size -= n; 
	n = write_icb_data(p, pplei->ICBCount, pplei->Data);
	p += n;
	size -= n;
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}

int parse_RFSWithData(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_RFSWithData *rfswd = (XL_RFSWithData*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"group\": \"%s\", \"Span\": %u, \"Channel\": %u, \"ResendFlag\": %u, \"AddressDataType\": %u, \"Data\": \"", msg->Tag, sk_getAssignedChannelGroup(rfswd->Span, rfswd->Channel), rfswd->Span, rfswd->Channel, rfswd->ResendFlag, rfswd->AddressDataType);
	p += n;
	size -= n;
	if(rfswd->AddressDataType == 0x03 ||
	   rfswd->AddressDataType == 0x05 ||
	   rfswd->AddressDataType == 0x06 ||
	   rfswd->AddressDataType == 0x07 ||
	   rfswd->AddressDataType == 0x33) {
		/* for now, only for ICBs */
		int icbcount = rfswd->Data[0];
		*p++ = int2char(icbcount >> 4); size--;
		*p++ = int2char(icbcount & 0xF); size--;
		 
		n = write_icb_data(p, icbcount, &rfswd->Data[1]);
		p += n;
		size -= n;
	}
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}

int parse_TransferChanMsg(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	SK_TransferChanMsg *tcm = (SK_TransferChanMsg*)msg;
	int n;
	char *p;
	p = json_buffer;
	n = snprintf(p, size, "{\"event\": \"sk_msg\", \"tag\": %u, \"Span\": %u, \"Channel\": %u, \"Target\": %i, \"AckTimeout\": %u, \"Tag1\": %i, \"Tag2\": %i, \"Tag3\": %i, \"Tag4\", \"AppGroupTarget\": \"%s\", \"Data\": \"", msg->Tag, tcm->Span, tcm->Channel, tcm->Target, tcm->AckTimeout, tcm->Tag1, tcm->Tag2, tcm->Tag3, tcm->Tag4, tcm->AppGroupTarget);
	p += n;
	size -= n;
	p = write_byte_array_string(p,tcm->Data, tcm->DataSize);	
	size -= tcm->DataSize;
	n = snprintf(p, size, "\"}");
	p += n;
	return p - json_buffer;
}

int parse_RouteControlAck(MsgStruct *msg, char *json_buffer, int size, unsigned int context) {
	XL_RouteControlAck *rca = (XL_RouteControlAck*)msg;
	int n;
	char *p;
	p = json_buffer;
	XL_AcknowledgeMessage *am = (XL_AcknowledgeMessage*)msg;
	if(am->Status == 0x10) {
		int span = (rca->Data[10] * 256) + rca->Data[11];
		int channel = rca->Data[12];
		// We copied the above from CallServices (Excel docs don't have a specification of the format)
		n = snprintf(p, size, "{\"event\": \"sk_msg_ack\", \"context\": %u, \"tag\": %u, \"status\": %i, \"Span\": %u, \"Channel\": %u}", context, msg->Tag, am->Status, span, channel);
	} else {
		n = snprintf(p, size, "{\"event\": \"sk_msg_ack\", \"context\": %u, \"tag\": %u, \"status\": %i}", context, msg->Tag, am->Status);
	}
	p += n;
	size -= n;
	return p - json_buffer;
}


