#include "skj_building.h"

int build_SleepMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SleepMessage *p = (SK_SleepMessage*)msg;
	sk_initMsg(p, TAG_SleepMessage);
	if(!minijson_set_int(error_buffer, props, count, "Seconds", &p->Seconds)) return 0;
	return 1;
}

int build_LLCControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_LLCControl *p = (SK_LLCControl*)msg;
	sk_initMsg(p, TAG_LLCControl);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_LLCControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_LLCControlAck *p = (SK_LLCControlAck*)msg;
	sk_initMsg(p, TAG_LLCControlAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AppControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppControl *p = (SK_AppControl*)msg;
	sk_initMsg(p, TAG_AppControl);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Target", &p->Target)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_AppControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppControlAck *p = (SK_AppControlAck*)msg;
	sk_initMsg(p, TAG_AppControlAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AppQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppQuery *p = (SK_AppQuery*)msg;
	sk_initMsg(p, TAG_AppQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Target", &p->Target)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AppQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppQueryAck *p = (SK_AppQueryAck*)msg;
	sk_initMsg(p, TAG_AppQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPCallServerReset(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPCallServerReset *p = (XL_IPCallServerReset*)msg;
	sk_initMsg(p, TAG_IPCallServerReset);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	return 1;
}

int build_ClearIPCallServerSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ClearIPCallServerSoftware *p = (XL_ClearIPCallServerSoftware*)msg;
	sk_initMsg(p, TAG_ClearIPCallServerSoftware);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	return 1;
}

int build_IPCallServerResetAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPCallServerResetAck *p = (XL_IPCallServerResetAck*)msg;
	sk_initMsg(p, TAG_IPCallServerResetAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	return 1;
}

int build_ClearIPCallServerSoftwareAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ClearIPCallServerSoftwareAck *p = (XL_ClearIPCallServerSoftwareAck*)msg;
	sk_initMsg(p, TAG_ClearIPCallServerSoftwareAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	return 1;
}

int build_SS7CLLIConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CLLIConfig *p = (XL_SS7CLLIConfig*)msg;
	sk_initMsg(p, TAG_SS7CLLIConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICNumber", &p->BaseCICNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICSpan", &p->BaseCICSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BaseCICChannel", &p->BaseCICChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataFormat", &p->DataFormat)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_SS7CLLIQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CLLIQuery *p = (XL_SS7CLLIQuery*)msg;
	sk_initMsg(p, TAG_SS7CLLIQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICNumber", &p->BaseCICNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICSpan", &p->BaseCICSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BaseCICChannel", &p->BaseCICChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	return 1;
}

int build_SS7CLLIQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CLLIQueryAck *p = (XL_SS7CLLIQueryAck*)msg;
	sk_initMsg(p, TAG_SS7CLLIQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICNumber", &p->BaseCICNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICSpan", &p->BaseCICSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BaseCICChannel", &p->BaseCICChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataFormat", &p->DataFormat)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_AdjustExnetAssigns(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AdjustExnetAssigns *p = (SK_AdjustExnetAssigns*)msg;
	sk_initMsg(p, TAG_AdjustExnetAssigns);
	return 1;
}

int build_WirelessMobilityConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_WirelessMobilityConfig *p = (XL_WirelessMobilityConfig*)msg;
	sk_initMsg(p, TAG_WirelessMobilityConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stack", &p->Stack)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_WirelessMobilityQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_WirelessMobilityQuery *p = (XL_WirelessMobilityQuery*)msg;
	sk_initMsg(p, TAG_WirelessMobilityQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stack", &p->Stack)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_WirelessMobilityQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_WirelessMobilityQueryAck *p = (XL_WirelessMobilityQueryAck*)msg;
	sk_initMsg(p, TAG_WirelessMobilityQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_ClearSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearSoftware *p = (SK_ClearSoftware*)msg;
	sk_initMsg(p, TAG_ClearSoftware);
	if(!minijson_set_uchar(error_buffer, props, count, "Matrix", &p->Matrix)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "NodeId", &p->NodeId)) return 0;
	return 1;
}

int build_ClearSoftwareAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearSoftwareAck *p = (SK_ClearSoftwareAck*)msg;
	sk_initMsg(p, TAG_ClearSoftwareAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_H323TimerChannelRanges(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_H323TimerChannelRanges *p = (SK_H323TimerChannelRanges*)msg;
	sk_initMsg(p, TAG_H323TimerChannelRanges);
	if(!minijson_set_ushort(error_buffer, props, count, "Node", &p->Node)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer301", &p->Timer301)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer303", &p->Timer303)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer310", &p->Timer310)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer101", &p->Timer101)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer102", &p->Timer102)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer105", &p->Timer105)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer106", &p->Timer106)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer108", &p->Timer108)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Timer109", &p->Timer109)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TimerGRQ", &p->TimerGRQ)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TimerGCF", &p->TimerGCF)) return 0;
	return 1;
}

int build_SSAInternalMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SSAInternalMsg *p = (SK_SSAInternalMsg*)msg;
	sk_initMsg(p, TAG_SSAInternalMsg);
	if(!minijson_set_char_array(error_buffer, props, count, "Comment", p->Comment)) return 0;
	return 1;
}

int build_MessageWrapper(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MessageWrapper *p = (XL_MessageWrapper*)msg;
	sk_initMsg(p, TAG_MessageWrapper);
	if(!minijson_set_ushort(error_buffer, props, count, "TargetNodeId", &p->TargetNodeId)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "WaitForAck", &p->WaitForAck)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PayloadTimeout", &p->PayloadTimeout)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PayloadSize", &p->PayloadSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Payload", p->Payload)) return 0;
	return 1;
}

int build_MessageWrapperAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MessageWrapperAck *p = (XL_MessageWrapperAck*)msg;
	sk_initMsg(p, TAG_MessageWrapperAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TargetNodeId", &p->TargetNodeId)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PayloadSize", &p->PayloadSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Payload", p->Payload)) return 0;
	return 1;
}

int build_CSAPPLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CSAPPLConfig *p = (XL_CSAPPLConfig*)msg;
	sk_initMsg(p, TAG_CSAPPLConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CSASlot", &p->CSASlot)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Protocol", &p->Protocol)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ConfigData", p->ConfigData)) return 0;
	return 1;
}

int build_CSAPPLTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CSAPPLTimerConfig *p = (XL_CSAPPLTimerConfig*)msg;
	sk_initMsg(p, TAG_CSAPPLTimerConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TimerType", &p->TimerType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TimerID", &p->TimerID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TimerValue", &p->TimerValue)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CSASlot", &p->CSASlot)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Protocol", &p->Protocol)) return 0;
	return 1;
}

int build_RecAnnFSConvert(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnFSConvert *p = (XL_RecAnnFSConvert*)msg;
	sk_initMsg(p, TAG_RecAnnFSConvert);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FSType", &p->FSType)) return 0;
	return 1;
}

int build_RecAnnFSDefrag(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnFSDefrag *p = (XL_RecAnnFSDefrag*)msg;
	sk_initMsg(p, TAG_RecAnnFSDefrag);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	return 1;
}

int build_RecAnnFSQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnFSQuery *p = (XL_RecAnnFSQuery*)msg;
	sk_initMsg(p, TAG_RecAnnFSQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	return 1;
}

int build_RecAnnFSReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnFSReport *p = (XL_RecAnnFSReport*)msg;
	sk_initMsg(p, TAG_RecAnnFSReport);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RANCount", &p->RANCount)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FSRevision", &p->FSRevision)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "UsedMemory", &p->UsedMemory)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DeletedMemory", &p->DeletedMemory)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AvailableMemory", &p->AvailableMemory)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DefragmentationLevel", &p->DefragmentationLevel)) return 0;
	return 1;
}

int build_RecAnnSingleDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnSingleDelete *p = (XL_RecAnnSingleDelete*)msg;
	sk_initMsg(p, TAG_RecAnnSingleDelete);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID", &p->ID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ForcedFlag", &p->ForcedFlag)) return 0;
	return 1;
}

int build_AppConnectionQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppConnectionQuery *p = (SK_AppConnectionQuery*)msg;
	sk_initMsg(p, TAG_AppConnectionQuery);
	if(!minijson_set_int(error_buffer, props, count, "AppID", &p->AppID)) return 0;
	return 1;
}

int build_AppConnectionQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppConnectionQueryAck *p = (SK_AppConnectionQueryAck*)msg;
	sk_initMsg(p, TAG_AppConnectionQueryAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AppID", &p->AppID)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppName", p->AppName)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppVersion", p->AppVersion)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "PID", &p->PID)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Hostname", p->Hostname)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "StartTime", p->StartTime)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "SkVersion", p->SkVersion)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "UserData", p->UserData)) return 0;
	return 1;
}

int build_AppPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppPopulationQuery *p = (SK_AppPopulationQuery*)msg;
	sk_initMsg(p, TAG_AppPopulationQuery);
	return 1;
}

int build_ARPCacheQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ARPCacheQuery *p = (XL_ARPCacheQuery*)msg;
	sk_initMsg(p, TAG_ARPCacheQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVDataType", &p->TLVDataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_ARPCacheReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ARPCacheReport *p = (XL_ARPCacheReport*)msg;
	sk_initMsg(p, TAG_ARPCacheReport);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVDataType", &p->TLVDataType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ARPCacheEntryCount", &p->ARPCacheEntryCount)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_ConnectionStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConnectionStatusMsg *p = (SK_ConnectionStatusMsg*)msg;
	sk_initMsg(p, TAG_ConnectionStatusMsg);
	if(!minijson_set_char_array(error_buffer, props, count, "IPAddress", p->IPAddress)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Name", &p->Name)) return 0;
	return 1;
}

int build_RecAnnReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnReport *p = (XL_RecAnnReport*)msg;
	sk_initMsg(p, TAG_RecAnnReport);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AnnounceCount", &p->AnnounceCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DS0StatusChange(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DS0StatusChange *p = (XL_DS0StatusChange*)msg;
	sk_initMsg(p, TAG_DS0StatusChange);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelStatus", &p->ChannelStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PurgeStatus", &p->PurgeStatus)) return 0;
	return 1;
}

int build_V5Config(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_V5Config *p = (XL_V5Config*)msg;
	sk_initMsg(p, TAG_V5Config);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_V5Query(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_V5Query *p = (XL_V5Query*)msg;
	sk_initMsg(p, TAG_V5Query);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	return 1;
}

int build_V5QueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_V5QueryAck *p = (XL_V5QueryAck*)msg;
	sk_initMsg(p, TAG_V5QueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AllInService(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllInService *p = (SK_AllInService*)msg;
	sk_initMsg(p, TAG_AllInService);
	return 1;
}

int build_AllOutOfService(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllOutOfService *p = (SK_AllOutOfService*)msg;
	sk_initMsg(p, TAG_AllOutOfService);
	return 1;
}

int build_GenericReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenericReport *p = (XL_GenericReport*)msg;
	sk_initMsg(p, TAG_GenericReport);
	if(!minijson_set_uchar(error_buffer, props, count, "ReportType", &p->ReportType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DynamicConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_DynamicConfig *p = (SK_DynamicConfig*)msg;
	sk_initMsg(p, TAG_DynamicConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigMode", &p->ConfigMode)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Filename", p->Filename)) return 0;
	return 1;
}

int build_DynamicConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_DynamicConfigAck *p = (SK_DynamicConfigAck*)msg;
	sk_initMsg(p, TAG_DynamicConfigAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_DroppedNotice(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_DroppedNotice *p = (SK_DroppedNotice*)msg;
	sk_initMsg(p, TAG_DroppedNotice);
	return 1;
}

int build_RedundantLLCRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantLLCRegister *p = (SK_RedundantLLCRegister*)msg;
	sk_initMsg(p, TAG_RedundantLLCRegister);
	return 1;
}

int build_ProductLicenseDownloadAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ProductLicenseDownloadAck *p = (XL_ProductLicenseDownloadAck*)msg;
	sk_initMsg(p, TAG_ProductLicenseDownloadAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	return 1;
}

int build_ProductLicenseDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ProductLicenseDownload *p = (XL_ProductLicenseDownload*)msg;
	sk_initMsg(p, TAG_ProductLicenseDownload);
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_ProductLicenseQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ProductLicenseQuery *p = (XL_ProductLicenseQuery*)msg;
	sk_initMsg(p, TAG_ProductLicenseQuery);
	return 1;
}

int build_ProductLicenseQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ProductLicenseQueryAck *p = (XL_ProductLicenseQueryAck*)msg;
	sk_initMsg(p, TAG_ProductLicenseQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumLicenses", &p->NumLicenses)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PingLLC(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_PingLLC *p = (SK_PingLLC*)msg;
	sk_initMsg(p, TAG_PingLLC);
	if(!minijson_set_int(error_buffer, props, count, "Propagate", &p->Propagate)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "State", p->State)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "CurrentTime", &p->CurrentTime)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "TimeAtLastCfg", &p->TimeAtLastCfg)) return 0;
	return 1;
}

int build_PingLLCAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_PingLLCAck *p = (SK_PingLLCAck*)msg;
	sk_initMsg(p, TAG_PingLLCAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Propagate", &p->Propagate)) return 0;
	return 1;
}

int build_RBICardConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RBICardConfigQuery *p = (XL_RBICardConfigQuery*)msg;
	sk_initMsg(p, TAG_RBICardConfigQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	return 1;
}

int build_RBICardConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RBICardConfigQueryAck *p = (XL_RBICardConfigQueryAck*)msg;
	sk_initMsg(p, TAG_RBICardConfigQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelsPerConnectorA", &p->ChannelsPerConnectorA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SpanTypeA", &p->SpanTypeA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalingFormatA", &p->SignalingFormatA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "VPProtocolA", &p->VPProtocolA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelsPerConnectorB", &p->ChannelsPerConnectorB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SpanTypeB", &p->SpanTypeB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalingFormatB", &p->SignalingFormatB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "VPProtocolB", &p->VPProtocolB)) return 0;
	return 1;
}

int build_RBICardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RBICardConfig *p = (XL_RBICardConfig*)msg;
	sk_initMsg(p, TAG_RBICardConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelsPerConnectorA", &p->ChannelsPerConnectorA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SpanTypeA", &p->SpanTypeA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalingFormatA", &p->SignalingFormatA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "VPProtocolA", &p->VPProtocolA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelsPerConnectorB", &p->ChannelsPerConnectorB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SpanTypeB", &p->SpanTypeB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalingFormatB", &p->SignalingFormatB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "VPProtocolB", &p->VPProtocolB)) return 0;
	return 1;
}

int build_SubrateConnectionManagement(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SubrateConnectionManagement *p = (XL_SubrateConnectionManagement*)msg;
	sk_initMsg(p, TAG_SubrateConnectionManagement);
	if(!minijson_set_ushort(error_buffer, props, count, "SubrateSpanA", &p->SubrateSpanA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SubrateChannelA", &p->SubrateChannelA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumBitsA", &p->NumBitsA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SubrateSpanB", &p->SubrateSpanB)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SubrateChannelB", &p->SubrateChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumBitsB", &p->NumBitsB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_ResourceAttributeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceAttributeConfig *p = (XL_ResourceAttributeConfig*)msg;
	sk_initMsg(p, TAG_ResourceAttributeConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceAttributeQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceAttributeQuery *p = (XL_ResourceAttributeQuery*)msg;
	sk_initMsg(p, TAG_ResourceAttributeQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceAttributeQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceAttributeQueryAck *p = (XL_ResourceAttributeQueryAck*)msg;
	sk_initMsg(p, TAG_ResourceAttributeQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPAddressConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPAddressConfig *p = (XL_IPAddressConfig*)msg;
	sk_initMsg(p, TAG_IPAddressConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPAddressConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPAddressConfigAck *p = (XL_IPAddressConfigAck*)msg;
	sk_initMsg(p, TAG_IPAddressConfigAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPAddressQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPAddressQuery *p = (XL_IPAddressQuery*)msg;
	sk_initMsg(p, TAG_IPAddressQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	return 1;
}

int build_IPAddressQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPAddressQueryAck *p = (XL_IPAddressQueryAck*)msg;
	sk_initMsg(p, TAG_IPAddressQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AllocateChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllocateChannel *p = (SK_AllocateChannel*)msg;
	sk_initMsg(p, TAG_AllocateChannel);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_AllocateChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllocateChannelAck *p = (SK_AllocateChannelAck*)msg;
	sk_initMsg(p, TAG_AllocateChannelAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AllocateChannelGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllocateChannelGroup *p = (SK_AllocateChannelGroup*)msg;
	sk_initMsg(p, TAG_AllocateChannelGroup);
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_AllocateChannelGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AllocateChannelGroupAck *p = (SK_AllocateChannelGroupAck*)msg;
	sk_initMsg(p, TAG_AllocateChannelGroupAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumChannels", &p->NumChannels)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Channels", p->Channels)) return 0;
	return 1;
}

int build_ChannelGroupContentsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelGroupContentsQuery *p = (SK_ChannelGroupContentsQuery*)msg;
	sk_initMsg(p, TAG_ChannelGroupContentsQuery);
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_ChannelGroupContentsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelGroupContentsQueryAck *p = (SK_ChannelGroupContentsQueryAck*)msg;
	sk_initMsg(p, TAG_ChannelGroupContentsQueryAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumChannels", &p->NumChannels)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Channels", p->Channels)) return 0;
	return 1;
}

int build_ChannelGroupPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelGroupPopulationQuery *p = (SK_ChannelGroupPopulationQuery*)msg;
	sk_initMsg(p, TAG_ChannelGroupPopulationQuery);
	return 1;
}

int build_ChannelGroupPopulationQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelGroupPopulationQueryAck *p = (SK_ChannelGroupPopulationQueryAck*)msg;
	sk_initMsg(p, TAG_ChannelGroupPopulationQueryAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumGroups", &p->NumGroups)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "GroupNames", p->GroupNames)) return 0;
	return 1;
}

int build_PPLTool(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_PPLTool *p = (SK_PPLTool*)msg;
	sk_initMsg(p, TAG_PPLTool);
	if(!minijson_set_char_array(error_buffer, props, count, "RepFile", p->RepFile)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CfgFile", p->CfgFile)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CSAFilename", p->CSAFilename)) return 0;
	return 1;
}

int build_HexTool(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_HexTool *p = (SK_HexTool*)msg;
	sk_initMsg(p, TAG_HexTool);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CfgFile", p->CfgFile)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CSAFilename", p->CSAFilename)) return 0;
	return 1;
}

int build_RecordedAnnouncement(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RecordedAnnouncement *p = (SK_RecordedAnnouncement*)msg;
	sk_initMsg(p, TAG_RecordedAnnouncement);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID", &p->ID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Encoding", &p->Encoding)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "File", p->File)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CSAFilename", p->CSAFilename)) return 0;
	return 1;
}

int build_RequestStandbyPoll(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RequestStandbyPoll *p = (SK_RequestStandbyPoll*)msg;
	sk_initMsg(p, TAG_RequestStandbyPoll);
	return 1;
}

int build_MonitorCardTrickle(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_MonitorCardTrickle *p = (SK_MonitorCardTrickle*)msg;
	sk_initMsg(p, TAG_MonitorCardTrickle);
	return 1;
}

int build_MonitorCardTrickleAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_MonitorCardTrickleAck *p = (SK_MonitorCardTrickleAck*)msg;
	sk_initMsg(p, TAG_MonitorCardTrickleAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_RouteControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RouteControl *p = (XL_RouteControl*)msg;
	sk_initMsg(p, TAG_RouteControl);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RouteControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RouteControlAck *p = (XL_RouteControlAck*)msg;
	sk_initMsg(p, TAG_RouteControlAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_TftpManage(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TftpManage *p = (XL_TftpManage*)msg;
	sk_initMsg(p, TAG_TftpManage);
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_TftpManageAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TftpManageAck *p = (XL_TftpManageAck*)msg;
	sk_initMsg(p, TAG_TftpManageAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MoreStatus", &p->MoreStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_VOIPProtocolConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VOIPProtocolConfig *p = (XL_VOIPProtocolConfig*)msg;
	sk_initMsg(p, TAG_VOIPProtocolConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_VOIPProtocolQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VOIPProtocolQuery *p = (XL_VOIPProtocolQuery*)msg;
	sk_initMsg(p, TAG_VOIPProtocolQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_VOIPProtocolQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VOIPProtocolQueryAck *p = (XL_VOIPProtocolQueryAck*)msg;
	sk_initMsg(p, TAG_VOIPProtocolQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_MediaGatewayConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MediaGatewayConfig *p = (XL_MediaGatewayConfig*)msg;
	sk_initMsg(p, TAG_MediaGatewayConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_MediaGatewayQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MediaGatewayQuery *p = (XL_MediaGatewayQuery*)msg;
	sk_initMsg(p, TAG_MediaGatewayQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	return 1;
}

int build_MediaGatewayQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MediaGatewayQueryAck *p = (XL_MediaGatewayQueryAck*)msg;
	sk_initMsg(p, TAG_MediaGatewayQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AssignNode(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AssignNode *p = (XL_AssignNode*)msg;
	sk_initMsg(p, TAG_AssignNode);
	if(!minijson_set_int(error_buffer, props, count, "PhysicalNode", &p->PhysicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LogicalNode", &p->LogicalNode)) return 0;
	return 1;
}

int build_CCSRedundancyConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CCSRedundancyConfig *p = (XL_CCSRedundancyConfig*)msg;
	sk_initMsg(p, TAG_CCSRedundancyConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "PrimaryCard", &p->PrimaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SecondaryCard", &p->SecondaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyType", &p->RedundancyType)) return 0;
	return 1;
}

int build_RingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RingConfig *p = (XL_RingConfig*)msg;
	sk_initMsg(p, TAG_RingConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeStatusReport *p = (XL_NodeStatusReport*)msg;
	sk_initMsg(p, TAG_NodeStatusReport);
	if(!minijson_set_int(error_buffer, props, count, "PhysicalNode", &p->PhysicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LogicalNode", &p->LogicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "HostNode", &p->HostNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NodeStatus", &p->NodeStatus)) return 0;
	return 1;
}

int build_RingStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RingStatusReport *p = (XL_RingStatusReport*)msg;
	sk_initMsg(p, TAG_RingStatusReport);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RingID", &p->RingID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RingStatus", &p->RingStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MoreStatus", &p->MoreStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PortAStatus", &p->PortAStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PortBStatus", &p->PortBStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MasterStatus", &p->MasterStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TransmitMode", &p->TransmitMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SourcePacketNum", &p->SourcePacketNum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MasterConfigurable", &p->MasterConfigurable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyState", &p->RedundancyState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RingMode", &p->RingMode)) return 0;
	return 1;
}

int build_RingStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RingStatusQuery *p = (XL_RingStatusQuery*)msg;
	sk_initMsg(p, TAG_RingStatusQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_RingStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RingStatusQueryAck *p = (XL_RingStatusQueryAck*)msg;
	sk_initMsg(p, TAG_RingStatusQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SystemResourceUtilQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemResourceUtilQuery *p = (XL_SystemResourceUtilQuery*)msg;
	sk_initMsg(p, TAG_SystemResourceUtilQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumOfResources", &p->NumOfResources)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SystemResourceUtilQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemResourceUtilQueryAck *p = (XL_SystemResourceUtilQueryAck*)msg;
	sk_initMsg(p, TAG_SystemResourceUtilQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_MultiHostConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MultiHostConfig *p = (XL_MultiHostConfig*)msg;
	sk_initMsg(p, TAG_MultiHostConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_MultiHostConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_MultiHostConfigAck *p = (XL_MultiHostConfigAck*)msg;
	sk_initMsg(p, TAG_MultiHostConfigAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SCCPTCAPConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SCCPTCAPConfig *p = (XL_SS7SCCPTCAPConfig*)msg;
	sk_initMsg(p, TAG_SS7SCCPTCAPConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SCCPTCAPQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SCCPTCAPQuery *p = (XL_SS7SCCPTCAPQuery*)msg;
	sk_initMsg(p, TAG_SS7SCCPTCAPQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SCCPTCAPQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SCCPTCAPQueryAck *p = (XL_SS7SCCPTCAPQueryAck*)msg;
	sk_initMsg(p, TAG_SS7SCCPTCAPQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeConfig *p = (XL_NodeConfig*)msg;
	sk_initMsg(p, TAG_NodeConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLen", &p->DataLen)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeConfigAck *p = (XL_NodeConfigAck*)msg;
	sk_initMsg(p, TAG_NodeConfigAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLength", &p->DataLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeConfigQuery *p = (XL_NodeConfigQuery*)msg;
	sk_initMsg(p, TAG_NodeConfigQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLen", &p->DataLen)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeConfigQueryAck *p = (XL_NodeConfigQueryAck*)msg;
	sk_initMsg(p, TAG_NodeConfigQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLength", &p->DataLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NodeStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeStatusQuery *p = (XL_NodeStatusQuery*)msg;
	sk_initMsg(p, TAG_NodeStatusQuery);
	return 1;
}

int build_NodeStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NodeStatusQueryAck *p = (XL_NodeStatusQueryAck*)msg;
	sk_initMsg(p, TAG_NodeStatusQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "PhysicalNode", &p->PhysicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LogicalNode", &p->LogicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "HostNode", &p->HostNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NodeStatus", &p->NodeStatus)) return 0;
	return 1;
}

int build_AssignEXSHostSlave(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AssignEXSHostSlave *p = (XL_AssignEXSHostSlave*)msg;
	sk_initMsg(p, TAG_AssignEXSHostSlave);
	if(!minijson_set_uchar(error_buffer, props, count, "HostNode", &p->HostNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SlaveNode", &p->SlaveNode)) return 0;
	return 1;
}

int build_AssignEXSHostSlaveAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AssignEXSHostSlaveAck *p = (XL_AssignEXSHostSlaveAck*)msg;
	sk_initMsg(p, TAG_AssignEXSHostSlaveAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_CCSRedundancyQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CCSRedundancyQuery *p = (XL_CCSRedundancyQuery*)msg;
	sk_initMsg(p, TAG_CCSRedundancyQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	return 1;
}

int build_CCSRedundancyQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CCSRedundancyQueryAck *p = (XL_CCSRedundancyQueryAck*)msg;
	sk_initMsg(p, TAG_CCSRedundancyQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PrimaryCard", &p->PrimaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SecondaryCard", &p->SecondaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ActiveCard", &p->ActiveCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyStatus", &p->RedundancyStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyType", &p->RedundancyType)) return 0;
	return 1;
}

int build_CCSRedundancyReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CCSRedundancyReport *p = (XL_CCSRedundancyReport*)msg;
	sk_initMsg(p, TAG_CCSRedundancyReport);
	if(!minijson_set_uchar(error_buffer, props, count, "PrimaryCard", &p->PrimaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SecondaryCard", &p->SecondaryCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ActiveCard", &p->ActiveCard)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyStatus", &p->RedundancyStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyType", &p->RedundancyType)) return 0;
	return 1;
}

int build_InterAppMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_InterAppMsg *p = (SK_InterAppMsg*)msg;
	sk_initMsg(p, TAG_InterAppMsg);
	if(!minijson_set_int(error_buffer, props, count, "Target", &p->Target)) return 0;

        int found_union21 = 0;
        property_t *prop;
        if(!minijson_find_property_ignorecase(props, count, (str)str_init("UnAckedMsg"), &prop)) {
                p->union21.UnAckedMsg = minijson_strntoi(prop->val.s, prop->val.len);
                found_union21 = 1;
        }
        if(!minijson_find_property_ignorecase(props, count, (str)str_init("Type"), &prop)) {
                p->union21.Type = minijson_strntoi(prop->val.s, prop->val.len);
                found_union21 = 1;
        }
        if(!found_union21) {
                sprintf(error_buffer, "Expected property UnAckedMsg|Type not present");
                return 0;
        }
	if(!minijson_set_ushort(error_buffer, props, count, "AckTimeout", &p->AckTimeout)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag1", &p->Tag1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag2", &p->Tag2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag3", &p->Tag3)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag4", &p->Tag4)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppGroupTarget", p->AppGroupTarget)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_InterAppMsgAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_InterAppMsgAck *p = (SK_InterAppMsgAck*)msg;
	sk_initMsg(p, TAG_InterAppMsgAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Byte1", &p->Byte1)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Short1", &p->Short1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag1", &p->Tag1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag2", &p->Tag2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag3", &p->Tag3)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag4", &p->Tag4)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_UserTimer(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_UserTimer *p = (SK_UserTimer*)msg;
	sk_initMsg(p, TAG_UserTimer);
	if(!minijson_set_float(error_buffer, props, count, "Seconds", &p->Seconds)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "GroupTag", &p->GroupTag)) return 0;
	return 1;
}

int build_UserTimerAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_UserTimerAck *p = (SK_UserTimerAck*)msg;
	sk_initMsg(p, TAG_UserTimerAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_DiagnosticsIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DiagnosticsIndication *p = (XL_DiagnosticsIndication*)msg;
	sk_initMsg(p, TAG_DiagnosticsIndication);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DiagnosticsType", &p->DiagnosticsType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ISDNQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNQuery *p = (XL_ISDNQuery*)msg;
	sk_initMsg(p, TAG_ISDNQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SubType", &p->SubType)) return 0;
	return 1;
}

int build_ISDNQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNQueryAck *p = (XL_ISDNQueryAck*)msg;
	sk_initMsg(p, TAG_ISDNQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ISDNTerminalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNTerminalConfig *p = (XL_ISDNTerminalConfig*)msg;
	sk_initMsg(p, TAG_ISDNTerminalConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CfgType", &p->CfgType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ISDNInterfaceConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNInterfaceConfig *p = (XL_ISDNInterfaceConfig*)msg;
	sk_initMsg(p, TAG_ISDNInterfaceConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ChannelProblem(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelProblem *p = (SK_ChannelProblem*)msg;
	sk_initMsg(p, TAG_ChannelProblem);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Problem", &p->Problem)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ErrorNum", &p->ErrorNum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Data1", &p->Data1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Data2", &p->Data2)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Text", p->Text)) return 0;
	return 1;
}

int build_TransferChanMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_TransferChanMsg *p = (SK_TransferChanMsg*)msg;
	sk_initMsg(p, TAG_TransferChanMsg);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Target", &p->Target)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "AckTimeout", &p->AckTimeout)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag1", &p->Tag1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag2", &p->Tag2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag3", &p->Tag3)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag4", &p->Tag4)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppGroupTarget", p->AppGroupTarget)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_TransferChanMsgAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_TransferChanMsgAck *p = (SK_TransferChanMsgAck*)msg;
	sk_initMsg(p, TAG_TransferChanMsgAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "AckTimeout", &p->AckTimeout)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag1", &p->Tag1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag2", &p->Tag2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag3", &p->Tag3)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag4", &p->Tag4)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AssignNotifyMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AssignNotifyMsg *p = (SK_AssignNotifyMsg*)msg;
	sk_initMsg(p, TAG_AssignNotifyMsg);
	return 1;
}

int build_Alarm(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_Alarm *p = (XL_Alarm*)msg;
	sk_initMsg(p, TAG_Alarm);
	if(!minijson_set_uchar(error_buffer, props, count, "InfoSize", &p->InfoSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Severity", &p->Severity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmNum", &p->AlarmNum)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Info", p->Info)) return 0;
	return 1;
}

int build_OutseizeControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_OutseizeControl *p = (XL_OutseizeControl*)msg;
	sk_initMsg(p, TAG_OutseizeControl);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_OutseizeControlAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_OutseizeControlAck *p = (XL_OutseizeControlAck*)msg;
	sk_initMsg(p, TAG_OutseizeControlAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SystemRegisterMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SystemRegisterMsg *p = (SK_SystemRegisterMsg*)msg;
	sk_initMsg(p, TAG_SystemRegisterMsg);
	return 1;
}

int build_SubMessageRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SubMessageRegister *p = (SK_SubMessageRegister*)msg;
	sk_initMsg(p, TAG_SubMessageRegister);
	return 1;
}

int build_ClearChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearChanGroup *p = (SK_ClearChanGroup*)msg;
	sk_initMsg(p, TAG_ClearChanGroup);
	if(!minijson_set_char_array(error_buffer, props, count, "ChannelGroup", p->ChannelGroup)) return 0;
	return 1;
}

int build_ClearAllChanGroups(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearAllChanGroups *p = (SK_ClearAllChanGroups*)msg;
	sk_initMsg(p, TAG_ClearAllChanGroups);
	return 1;
}

int build_IgnoreChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_IgnoreChanGroup *p = (SK_IgnoreChanGroup*)msg;
	sk_initMsg(p, TAG_IgnoreChanGroup);
	return 1;
}

int build_WatchChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WatchChanGroup *p = (SK_WatchChanGroup*)msg;
	sk_initMsg(p, TAG_WatchChanGroup);
	return 1;
}

int build_ForceGroupState(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ForceGroupState *p = (SK_ForceGroupState*)msg;
	sk_initMsg(p, TAG_ForceGroupState);
	if(!minijson_set_char_array(error_buffer, props, count, "ChannelGroup", p->ChannelGroup)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_ForceGroupStateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ForceGroupStateAck *p = (SK_ForceGroupStateAck*)msg;
	sk_initMsg(p, TAG_ForceGroupStateAck);
	if(!minijson_set_char_array(error_buffer, props, count, "ChannelGroup", p->ChannelGroup)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AppDescriptionData(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AppDescriptionData *p = (SK_AppDescriptionData*)msg;
	sk_initMsg(p, TAG_AppDescriptionData);
	return 1;
}

int build_ActivateMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ActivateMatrix *p = (SK_ActivateMatrix*)msg;
	sk_initMsg(p, TAG_ActivateMatrix);
	if(!minijson_set_uchar(error_buffer, props, count, "ActivateLeft", &p->ActivateLeft)) return 0;
	return 1;
}

int build_ResetStandbyMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ResetStandbyMatrix *p = (SK_ResetStandbyMatrix*)msg;
	sk_initMsg(p, TAG_ResetStandbyMatrix);
	return 1;
}

int build_GenerateLogMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_GenerateLogMsg *p = (SK_GenerateLogMsg*)msg;
	sk_initMsg(p, TAG_GenerateLogMsg);
	return 1;
}

int build_LogLevel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_LogLevel *p = (SK_LogLevel*)msg;
	sk_initMsg(p, TAG_LogLevel);
	return 1;
}

int build_AttachGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AttachGroup *p = (SK_AttachGroup*)msg;
	sk_initMsg(p, TAG_AttachGroup);
	return 1;
}

int build_RegisterVirtualName(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RegisterVirtualName *p = (SK_RegisterVirtualName*)msg;
	sk_initMsg(p, TAG_RegisterVirtualName);
	return 1;
}

int build_BroadcastLoad(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_BroadcastLoad *p = (SK_BroadcastLoad*)msg;
	sk_initMsg(p, TAG_BroadcastLoad);
	return 1;
}

int build_MonitorChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_MonitorChannel *p = (SK_MonitorChannel*)msg;
	sk_initMsg(p, TAG_MonitorChannel);
	return 1;
}

int build_AttachGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AttachGroupAck *p = (SK_AttachGroupAck*)msg;
	sk_initMsg(p, TAG_AttachGroupAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AssociateChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AssociateChanGroup *p = (SK_AssociateChanGroup*)msg;
	sk_initMsg(p, TAG_AssociateChanGroup);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "ChannelGroup", p->ChannelGroup)) return 0;
	return 1;
}

int build_RemoveChannelsFromGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RemoveChannelsFromGroup *p = (SK_RemoveChannelsFromGroup*)msg;
	sk_initMsg(p, TAG_RemoveChannelsFromGroup);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "ChannelGroup", p->ChannelGroup)) return 0;
	return 1;
}

int build_ConfigChanGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigChanGroup *p = (SK_ConfigChanGroup*)msg;
	sk_initMsg(p, TAG_ConfigChanGroup);
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Parameter", &p->Parameter)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_CancelUserTimer(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_CancelUserTimer *p = (SK_CancelUserTimer*)msg;
	sk_initMsg(p, TAG_CancelUserTimer);
	if(!minijson_set_int(error_buffer, props, count, "GroupTag", &p->GroupTag)) return 0;
	return 1;
}

int build_CancelUserTimerAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_CancelUserTimerAck *p = (SK_CancelUserTimerAck*)msg;
	sk_initMsg(p, TAG_CancelUserTimerAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "GroupTag", &p->GroupTag)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumCanceled", &p->NumCanceled)) return 0;
	return 1;
}

int build_AnswerSuperviseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AnswerSuperviseConfig *p = (XL_AnswerSuperviseConfig*)msg;
	sk_initMsg(p, TAG_AnswerSuperviseConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AnswerMode", &p->AnswerMode)) return 0;
	return 1;
}

int build_CardStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CardStatusQuery *p = (XL_CardStatusQuery*)msg;
	sk_initMsg(p, TAG_CardStatusQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_CardStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CardStatusReport *p = (XL_CardStatusReport*)msg;
	sk_initMsg(p, TAG_CardStatusReport);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardStatus", &p->CardStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfTestRslts", &p->ConfTestRslts)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ArtRevision", &p->ArtRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FunctRevision", &p->FunctRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ROMMajorRevision", &p->ROMMajorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ROMMinorRevision", &p->ROMMinorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMMajorRevision", &p->RAMMajorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMMinorRevision", &p->RAMMinorRevision)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SerialNumber", &p->SerialNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RAMSize", &p->RAMSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "CardSpecifics", p->CardSpecifics)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "HardwareConfig", p->HardwareConfig)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardID", &p->CardID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMBuildNum", &p->RAMBuildNum)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConfigTag", &p->ConfigTag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LineCardSpeed", &p->LineCardSpeed)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SoftwareResetReason", &p->SoftwareResetReason)) return 0;
	return 1;
}

int build_CardStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CardStatusQueryAck *p = (XL_CardStatusQueryAck*)msg;
	sk_initMsg(p, TAG_CardStatusQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardStatus", &p->CardStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfTestRslts", &p->ConfTestRslts)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ArtRevision", &p->ArtRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FunctRevision", &p->FunctRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ROMMajorRevision", &p->ROMMajorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ROMMinorRevision", &p->ROMMinorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMMajorRevision", &p->RAMMajorRevision)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMMinorRevision", &p->RAMMinorRevision)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SerialNumber", &p->SerialNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RAMSize", &p->RAMSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "CardSpecifics", p->CardSpecifics)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "HardwareConfig", p->HardwareConfig)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardID", &p->CardID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RAMBuildNum", &p->RAMBuildNum)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConfigTag", &p->ConfigTag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LineCardSpeed", &p->LineCardSpeed)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SoftwareResetReason", &p->SoftwareResetReason)) return 0;
	return 1;
}

int build_Connect(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_Connect *p = (XL_Connect*)msg;
	sk_initMsg(p, TAG_Connect);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	return 1;
}

int build_RecAnnQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnQuery *p = (XL_RecAnnQuery*)msg;
	sk_initMsg(p, TAG_RecAnnQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	return 1;
}

int build_RecAnnQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnQueryAck *p = (XL_RecAnnQueryAck*)msg;
	sk_initMsg(p, TAG_RecAnnQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "AnnounceCount", &p->AnnounceCount)) return 0;
	return 1;
}

int build_RecAnnConnect(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnConnect *p = (XL_RecAnnConnect*)msg;
	sk_initMsg(p, TAG_RecAnnConnect);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Config", &p->Config)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Event", &p->Event)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Cnt", &p->Cnt)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID1", &p->ID1)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID2", &p->ID2)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID3", &p->ID3)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID4", &p->ID4)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID5", &p->ID5)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID6", &p->ID6)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID7", &p->ID7)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID8", &p->ID8)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID9", &p->ID9)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID10", &p->ID10)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "OtherIDs", p->OtherIDs)) return 0;
	return 1;
}

int build_RecAnnDownloadInit(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnDownloadInit *p = (XL_RecAnnDownloadInit*)msg;
	sk_initMsg(p, TAG_RecAnnDownloadInit);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID", &p->ID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Size", &p->Size)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Checksum", &p->Checksum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Encoding", &p->Encoding)) return 0;
	return 1;
}

int build_RecAnnDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnDownload *p = (XL_RecAnnDownload*)msg;
	sk_initMsg(p, TAG_RecAnnDownload);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ID", &p->ID)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ConnectTonePattern(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectTonePattern *p = (XL_ConnectTonePattern*)msg;
	sk_initMsg(p, TAG_ConnectTonePattern);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallProgressPatternID", &p->CallProgressPatternID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "NumCycles", &p->NumCycles)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Flag", &p->Flag)) return 0;
	return 1;
}

int build_ChannelParameterQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelParameterQuery *p = (XL_ChannelParameterQuery*)msg;
	sk_initMsg(p, TAG_ChannelParameterQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ChannelParameterQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelParameterQueryAck *p = (XL_ChannelParameterQueryAck*)msg;
	sk_initMsg(p, TAG_ChannelParameterQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TrunkType", &p->TrunkType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DistantReleaseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DistantReleaseConfig *p = (XL_DistantReleaseConfig*)msg;
	sk_initMsg(p, TAG_DistantReleaseConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ReleaseMode", &p->ReleaseMode)) return 0;
	return 1;
}

int build_LocalReleaseConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_LocalReleaseConfig *p = (XL_LocalReleaseConfig*)msg;
	sk_initMsg(p, TAG_LocalReleaseConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ReleaseMode", &p->ReleaseMode)) return 0;
	return 1;
}

int build_ReleaseCacheChannels(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ReleaseCacheChannels *p = (SK_ReleaseCacheChannels*)msg;
	sk_initMsg(p, TAG_ReleaseCacheChannels);
	return 1;
}

int build_ChannelReleaseRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelReleaseRequest *p = (XL_ChannelReleaseRequest*)msg;
	sk_initMsg(p, TAG_ChannelReleaseRequest);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ReleaseDataType", &p->ReleaseDataType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PollIntervalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PollIntervalConfig *p = (XL_PollIntervalConfig*)msg;
	sk_initMsg(p, TAG_PollIntervalConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "PollInterval", &p->PollInterval)) return 0;
	return 1;
}

int build_PollRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PollRequest *p = (XL_PollRequest*)msg;
	sk_initMsg(p, TAG_PollRequest);
	return 1;
}

int build_PollRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PollRequestAck *p = (XL_PollRequestAck*)msg;
	sk_initMsg(p, TAG_PollRequestAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SystemType", &p->SystemType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixSide", &p->MatrixSide)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixState", &p->MatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AdjMatrixState", &p->AdjMatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StatusBits", &p->StatusBits)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExcelPort", &p->ExcelPort)) return 0;
	return 1;
}

int build_T1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_T1SpanConfig *p = (XL_T1SpanConfig*)msg;
	sk_initMsg(p, TAG_T1SpanConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format1", &p->Format1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format2", &p->Format2)) return 0;
	return 1;
}

int build_TrunkTypeConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TrunkTypeConfig *p = (XL_TrunkTypeConfig*)msg;
	sk_initMsg(p, TAG_TrunkTypeConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TrunkType", &p->TrunkType)) return 0;
	return 1;
}

int build_ServiceStateConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServiceStateConfig *p = (XL_ServiceStateConfig*)msg;
	sk_initMsg(p, TAG_ServiceStateConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ForcedFlag", &p->ForcedFlag)) return 0;
	return 1;
}

int build_AssignSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AssignSpan *p = (XL_AssignSpan*)msg;
	sk_initMsg(p, TAG_AssignSpan);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_AssignSpanAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AssignSpanAck *p = (XL_AssignSpanAck*)msg;
	sk_initMsg(p, TAG_AssignSpanAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_PollMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PollMessage *p = (XL_PollMessage*)msg;
	sk_initMsg(p, TAG_PollMessage);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SystemType", &p->SystemType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixSide", &p->MatrixSide)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixState", &p->MatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AdjMatrixState", &p->AdjMatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StatusBits", &p->StatusBits)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExcelPort", &p->ExcelPort)) return 0;
	return 1;
}

int build_CardPopulationQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CardPopulationQuery *p = (XL_CardPopulationQuery*)msg;
	sk_initMsg(p, TAG_CardPopulationQuery);
	return 1;
}

int build_CardPopulationQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CardPopulationQueryAck *p = (XL_CardPopulationQueryAck*)msg;
	sk_initMsg(p, TAG_CardPopulationQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Info", p->Info)) return 0;
	return 1;
}

int build_VersionRequestQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VersionRequestQuery *p = (XL_VersionRequestQuery*)msg;
	sk_initMsg(p, TAG_VersionRequestQuery);
	return 1;
}

int build_VersionRequestQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VersionRequestQueryAck *p = (XL_VersionRequestQueryAck*)msg;
	sk_initMsg(p, TAG_VersionRequestQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BootMajor", &p->BootMajor)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BootMinor", &p->BootMinor)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SoftwareMajor", &p->SoftwareMajor)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SoftwareMinor", &p->SoftwareMinor)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SoftwareBuild", &p->SoftwareBuild)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "MatrixStamp", &p->MatrixStamp)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AdjMatrixStamp", &p->AdjMatrixStamp)) return 0;
	return 1;
}

int build_ChannelStateTransition(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ChannelStateTransition *p = (SK_ChannelStateTransition*)msg;
	sk_initMsg(p, TAG_ChannelStateTransition);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "State", &p->State)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Owner", &p->Owner)) return 0;
	return 1;
}

int build_RequestChannelMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RequestChannelMsg *p = (SK_RequestChannelMsg*)msg;
	sk_initMsg(p, TAG_RequestChannelMsg);
	return 1;
}

int build_RequestChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RequestChannelAck *p = (SK_RequestChannelAck*)msg;
	sk_initMsg(p, TAG_RequestChannelAck);
	if(!minijson_set_int(error_buffer, props, count, "SKStatus", &p->SKStatus)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "XLStatus", &p->XLStatus)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_DownloadBeginBRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DownloadBeginBRecord *p = (XL_DownloadBeginBRecord*)msg;
	sk_initMsg(p, TAG_DownloadBeginBRecord);
	return 1;
}

int build_DownloadBeginSRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DownloadBeginSRecord *p = (XL_DownloadBeginSRecord*)msg;
	sk_initMsg(p, TAG_DownloadBeginSRecord);
	return 1;
}

int build_DownloadBRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DownloadBRecord *p = (XL_DownloadBRecord*)msg;
	sk_initMsg(p, TAG_DownloadBRecord);
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DownloadSRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DownloadSRecord *p = (XL_DownloadSRecord*)msg;
	sk_initMsg(p, TAG_DownloadSRecord);
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DownloadComplete(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DownloadComplete *p = (XL_DownloadComplete*)msg;
	sk_initMsg(p, TAG_DownloadComplete);
	if(!minijson_set_int(error_buffer, props, count, "Timestamp", &p->Timestamp)) return 0;
	return 1;
}

int build_AlarmCleared(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_AlarmCleared *p = (XL_AlarmCleared*)msg;
	sk_initMsg(p, TAG_AlarmCleared);
	if(!minijson_set_uchar(error_buffer, props, count, "InfoSize", &p->InfoSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Severity", &p->Severity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmNum", &p->AlarmNum)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Info", p->Info)) return 0;
	return 1;
}

int build_BChannelBlock(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BChannelBlock *p = (XL_BChannelBlock*)msg;
	sk_initMsg(p, TAG_BChannelBlock);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BlockState", &p->BlockState)) return 0;
	return 1;
}

int build_BChannelConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BChannelConfig *p = (XL_BChannelConfig*)msg;
	sk_initMsg(p, TAG_BChannelConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Value", &p->Value)) return 0;
	return 1;
}

int build_BecomeActive(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BecomeActive *p = (XL_BecomeActive*)msg;
	sk_initMsg(p, TAG_BecomeActive);
	return 1;
}

int build_BusyOut(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BusyOut *p = (XL_BusyOut*)msg;
	sk_initMsg(p, TAG_BusyOut);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_BusyOutFlagConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BusyOutFlagConfig *p = (XL_BusyOutFlagConfig*)msg;
	sk_initMsg(p, TAG_BusyOutFlagConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Flag", &p->Flag)) return 0;
	return 1;
}

int build_CallProcessingEvent(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CallProcessingEvent *p = (XL_CallProcessingEvent*)msg;
	sk_initMsg(p, TAG_CallProcessingEvent);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Event", &p->Event)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_CPAClassConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPAClassConfig *p = (XL_CPAClassConfig*)msg;
	sk_initMsg(p, TAG_CPAClassConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "UpdateFlag", &p->UpdateFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Class", &p->Class)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_CPAPatternConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPAPatternConfig *p = (XL_CPAPatternConfig*)msg;
	sk_initMsg(p, TAG_CPAPatternConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "UpdateFlag", &p->UpdateFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Pattern", &p->Pattern)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_CPAResult(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPAResult *p = (XL_CPAResult*)msg;
	sk_initMsg(p, TAG_CPAResult);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Result", &p->Result)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Diag1", &p->Diag1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Diag2", &p->Diag2)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Diag3", &p->Diag3)) return 0;
	return 1;
}

int build_ChannelReleased(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelReleased *p = (XL_ChannelReleased*)msg;
	sk_initMsg(p, TAG_ChannelReleased);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ChannelReleasedWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelReleasedWithData *p = (XL_ChannelReleasedWithData*)msg;
	sk_initMsg(p, TAG_ChannelReleasedWithData);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBType", &p->ICBType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBSubtype", &p->ICBSubtype)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBLength", &p->ICBLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_ClearSystemSoftware(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ClearSystemSoftware *p = (XL_ClearSystemSoftware*)msg;
	sk_initMsg(p, TAG_ClearSystemSoftware);
	return 1;
}

int build_CollectDigitString(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CollectDigitString *p = (XL_CollectDigitString*)msg;
	sk_initMsg(p, TAG_CollectDigitString);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Mode", &p->Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MaxDigits", &p->MaxDigits)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumTermChars", &p->NumTermChars)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigBits", &p->ConfigBits)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TermChars", &p->TermChars)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "InterDigitTimer", &p->InterDigitTimer)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FirstDigitTimer", &p->FirstDigitTimer)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CompletionTimer", &p->CompletionTimer)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "MinReceiveDigitDuration", &p->MinReceiveDigitDuration)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AddressSignallingType", &p->AddressSignallingType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumDigitStrings", &p->NumDigitStrings)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ResumeDigitCltnTimer", &p->ResumeDigitCltnTimer)) return 0;
	return 1;
}

int build_ConferenceCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConferenceCreate *p = (XL_ConferenceCreate*)msg;
	sk_initMsg(p, TAG_ConferenceCreate);
	if(!minijson_set_uchar(error_buffer, props, count, "ConferenceSize", &p->ConferenceSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConferenceType", &p->ConferenceType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BroadcastEnable", &p->BroadcastEnable)) return 0;
	return 1;
}

int build_ConferenceDeleteRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConferenceDeleteRequest *p = (XL_ConferenceDeleteRequest*)msg;
	sk_initMsg(p, TAG_ConferenceDeleteRequest);
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ForcedFlag", &p->ForcedFlag)) return 0;
	return 1;
}

int build_ConferenceDeleted(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConferenceDeleted *p = (XL_ConferenceDeleted*)msg;
	sk_initMsg(p, TAG_ConferenceDeleted);
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	return 1;
}

int build_ConnectOneWay(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectOneWay *p = (XL_ConnectOneWay*)msg;
	sk_initMsg(p, TAG_ConnectOneWay);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BPad", &p->BPad)) return 0;
	return 1;
}

int build_ConnectOneWayForced(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectOneWayForced *p = (XL_ConnectOneWayForced*)msg;
	sk_initMsg(p, TAG_ConnectOneWayForced);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BPad", &p->BPad)) return 0;
	return 1;
}

int build_ConnectOneWayToConference(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectOneWayToConference *p = (XL_ConnectOneWayToConference*)msg;
	sk_initMsg(p, TAG_ConnectOneWayToConference);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	return 1;
}

int build_ConnectToConference(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectToConference *p = (XL_ConnectToConference*)msg;
	sk_initMsg(p, TAG_ConnectToConference);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	return 1;
}

int build_ConnectWait(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectWait *p = (XL_ConnectWait*)msg;
	sk_initMsg(p, TAG_ConnectWait);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ConnectWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectWithData *p = (XL_ConnectWithData*)msg;
	sk_initMsg(p, TAG_ConnectWithData);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConnectDataType", &p->ConnectDataType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ConnectWithPad(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectWithPad *p = (XL_ConnectWithPad*)msg;
	sk_initMsg(p, TAG_ConnectWithPad);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "APad", &p->APad)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BPad", &p->BPad)) return 0;
	return 1;
}

int build_CPCDetection(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPCDetection *p = (XL_CPCDetection*)msg;
	sk_initMsg(p, TAG_CPCDetection);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_CrossConnectChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CrossConnectChannel *p = (XL_CrossConnectChannel*)msg;
	sk_initMsg(p, TAG_CrossConnectChannel);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AEncoding", &p->AEncoding)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "APad", &p->APad)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BEncoding", &p->BEncoding)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BPad", &p->BPad)) return 0;
	return 1;
}

int build_CrossConnectSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CrossConnectSpan *p = (XL_CrossConnectSpan*)msg;
	sk_initMsg(p, TAG_CrossConnectSpan);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelAEncoding", &p->ChannelAEncoding)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelAPad", &p->ChannelAPad)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelBEncoding", &p->ChannelBEncoding)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelBPad", &p->ChannelBPad)) return 0;
	return 1;
}

int build_CrossDisconnectChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CrossDisconnectChannel *p = (XL_CrossDisconnectChannel*)msg;
	sk_initMsg(p, TAG_CrossDisconnectChannel);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	return 1;
}

int build_CrossDisconnectSpan(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CrossDisconnectSpan *p = (XL_CrossDisconnectSpan*)msg;
	sk_initMsg(p, TAG_CrossDisconnectSpan);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	return 1;
}

int build_DChannelAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelAssign *p = (XL_DChannelAssign*)msg;
	sk_initMsg(p, TAG_DChannelAssign);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SecondaryDChannelFacility", &p->SecondaryDChannelFacility)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DChannelType", &p->DChannelType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Data", &p->Data)) return 0;
	return 1;
}

int build_DisconnectTonePattern(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DisconnectTonePattern *p = (XL_DisconnectTonePattern*)msg;
	sk_initMsg(p, TAG_DisconnectTonePattern);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_FilterTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_FilterTimerConfig *p = (XL_FilterTimerConfig*)msg;
	sk_initMsg(p, TAG_FilterTimerConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FilterID", &p->FilterID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Value", &p->Value)) return 0;
	return 1;
}

int build_FlashTimingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_FlashTimingConfig *p = (XL_FlashTimingConfig*)msg;
	sk_initMsg(p, TAG_FlashTimingConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FlashMode", &p->FlashMode)) return 0;
	return 1;
}

int build_GenerateCallProcessingEvent(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenerateCallProcessingEvent *p = (XL_GenerateCallProcessingEvent*)msg;
	sk_initMsg(p, TAG_GenerateCallProcessingEvent);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Event", &p->Event)) return 0;
	return 1;
}

int build_InpulsingParametersConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_InpulsingParametersConfig *p = (XL_InpulsingParametersConfig*)msg;
	sk_initMsg(p, TAG_InpulsingParametersConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage", &p->Stage)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumDigitStrings", &p->NumDigitStrings)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "StageCompleteTimeout", &p->StageCompleteTimeout)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AddrSignallingType", &p->AddrSignallingType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "String1Method", &p->String1Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "String1Data", &p->String1Data)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "String2Method", &p->String2Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "String2Data", &p->String2Data)) return 0;
	return 1;
}

int build_InseizeControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_InseizeControl *p = (XL_InseizeControl*)msg;
	sk_initMsg(p, TAG_InseizeControl);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_InseizeInstrListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_InseizeInstrListConfig *p = (XL_InseizeInstrListConfig*)msg;
	sk_initMsg(p, TAG_InseizeInstrListConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrNum", &p->InstrNum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrType", &p->InstrType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrData1", &p->InstrData1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrData2", &p->InstrData2)) return 0;
	return 1;
}

int build_LoopTimingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_LoopTimingConfig *p = (XL_LoopTimingConfig*)msg;
	sk_initMsg(p, TAG_LoopTimingConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Offset", &p->Offset)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_DSPSIMMConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DSPSIMMConfig *p = (XL_DSPSIMMConfig*)msg;
	sk_initMsg(p, TAG_DSPSIMMConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DSP0Func", &p->DSP0Func)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DSP1Func", &p->DSP1Func)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DSP2Func", &p->DSP2Func)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DSP3Func", &p->DSP3Func)) return 0;
	return 1;
}

int build_TimeSet(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TimeSet *p = (XL_TimeSet*)msg;
	sk_initMsg(p, TAG_TimeSet);
	if(!minijson_set_uchar(error_buffer, props, count, "Month", &p->Month)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Day", &p->Day)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Year", &p->Year)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Hour", &p->Hour)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Minute", &p->Minute)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Second", &p->Second)) return 0;
	return 1;
}

int build_TagConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TagConfig *p = (XL_TagConfig*)msg;
	sk_initMsg(p, TAG_TagConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BrdTag", &p->BrdTag)) return 0;
	return 1;
}

int build_T1SpanFormatQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_T1SpanFormatQuery *p = (XL_T1SpanFormatQuery*)msg;
	sk_initMsg(p, TAG_T1SpanFormatQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	return 1;
}

int build_T1SpanFormatQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_T1SpanFormatQueryAck *p = (XL_T1SpanFormatQueryAck*)msg;
	sk_initMsg(p, TAG_T1SpanFormatQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LineLength", &p->LineLength)) return 0;
	return 1;
}

int build_SystemLogQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemLogQuery *p = (XL_SystemLogQuery*)msg;
	sk_initMsg(p, TAG_SystemLogQuery);
	return 1;
}

int build_SystemLogQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemLogQueryAck *p = (XL_SystemLogQueryAck*)msg;
	sk_initMsg(p, TAG_SystemLogQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TrunkStatePurges", &p->TrunkStatePurges)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "UnackedHostMsgs", &p->UnackedHostMsgs)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CallsNotServiced", &p->CallsNotServiced)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "MsgRetriesControl", &p->MsgRetriesControl)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "MsgRetriesMatrix", &p->MsgRetriesMatrix)) return 0;
	return 1;
}

int build_SynchPriorityQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SynchPriorityQuery *p = (XL_SynchPriorityQuery*)msg;
	sk_initMsg(p, TAG_SynchPriorityQuery);
	return 1;
}

int build_SynchPriorityQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SynchPriorityQueryAck *p = (XL_SynchPriorityQueryAck*)msg;
	sk_initMsg(p, TAG_SynchPriorityQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CurrentMode", &p->CurrentMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority1Mode", &p->Priority1Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority2Mode", &p->Priority2Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority3Mode", &p->Priority3Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority4Mode", &p->Priority4Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority5Mode", &p->Priority5Mode)) return 0;
	return 1;
}

int build_SynchPriorityConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SynchPriorityConfig *p = (XL_SynchPriorityConfig*)msg;
	sk_initMsg(p, TAG_SynchPriorityConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Priority1Mode", &p->Priority1Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority2Mode", &p->Priority2Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority3Mode", &p->Priority3Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority4Mode", &p->Priority4Mode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority5Mode", &p->Priority5Mode)) return 0;
	return 1;
}

int build_StartDialConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_StartDialConfig *p = (XL_StartDialConfig*)msg;
	sk_initMsg(p, TAG_StartDialConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartDialType", &p->StartDialType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartDialValue", &p->StartDialValue)) return 0;
	return 1;
}

int build_SpanStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SpanStatusQuery *p = (XL_SpanStatusQuery*)msg;
	sk_initMsg(p, TAG_SpanStatusQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	return 1;
}

int build_SpanStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SpanStatusQueryAck *p = (XL_SpanStatusQueryAck*)msg;
	sk_initMsg(p, TAG_SpanStatusQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmStatus", &p->AlarmStatus)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BiPolarCntr", &p->BiPolarCntr)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FrameErrors", &p->FrameErrors)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SlipCntr", &p->SlipCntr)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RemoteAlarmCntr", &p->RemoteAlarmCntr)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FrameLossCntr", &p->FrameLossCntr)) return 0;
	return 1;
}

int build_SpanFilterQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SpanFilterQuery *p = (XL_SpanFilterQuery*)msg;
	sk_initMsg(p, TAG_SpanFilterQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	return 1;
}

int build_SpanFilterQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SpanFilterQueryAck *p = (XL_SpanFilterQueryAck*)msg;
	sk_initMsg(p, TAG_SpanFilterQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "NoCGAFilter", &p->NoCGAFilter)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CGAFilter", &p->CGAFilter)) return 0;
	return 1;
}

int build_SpanFilterConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SpanFilterConfig *p = (XL_SpanFilterConfig*)msg;
	sk_initMsg(p, TAG_SpanFilterConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Value", &p->Value)) return 0;
	return 1;
}

int build_ResetMatrix(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResetMatrix *p = (XL_ResetMatrix*)msg;
	sk_initMsg(p, TAG_ResetMatrix);
	return 1;
}

int build_ResetConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResetConfig *p = (XL_ResetConfig*)msg;
	sk_initMsg(p, TAG_ResetConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ForcedFlag", &p->ForcedFlag)) return 0;
	return 1;
}

int build_RFSWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RFSWithData *p = (XL_RFSWithData*)msg;
	sk_initMsg(p, TAG_RFSWithData);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ResendFlag", &p->ResendFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AddressDataType", &p->AddressDataType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RequestForService(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RequestForService *p = (XL_RequestForService*)msg;
	sk_initMsg(p, TAG_RequestForService);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ResendFlag", &p->ResendFlag)) return 0;
	return 1;
}

int build_ReleaseChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ReleaseChannel *p = (XL_ReleaseChannel*)msg;
	sk_initMsg(p, TAG_ReleaseChannel);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	return 1;
}

int build_PCMEncodingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PCMEncodingConfig *p = (XL_PCMEncodingConfig*)msg;
	sk_initMsg(p, TAG_PCMEncodingConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	return 1;
}

int build_ParkChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ParkChannel *p = (XL_ParkChannel*)msg;
	sk_initMsg(p, TAG_ParkChannel);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	return 1;
}

int build_OutseizeInstrListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_OutseizeInstrListConfig *p = (XL_OutseizeInstrListConfig*)msg;
	sk_initMsg(p, TAG_OutseizeInstrListConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrNum", &p->InstrNum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrType", &p->InstrType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrData1", &p->InstrData1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "InstrData2", &p->InstrData2)) return 0;
	return 1;
}

int build_OutpulseDigits(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_OutpulseDigits *p = (XL_OutpulseDigits*)msg;
	sk_initMsg(p, TAG_OutpulseDigits);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalType", &p->SignalType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StringCount", &p->StringCount)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StringFormat", &p->StringFormat)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StringMode", &p->StringMode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FirstDigitDuration", &p->FirstDigitDuration)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DigitDuration", &p->DigitDuration)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "InterDigitDuration", &p->InterDigitDuration)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DelayDuration", &p->DelayDuration)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "GenerateEventFlag", &p->GenerateEventFlag)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "StringsData", p->StringsData)) return 0;
	return 1;
}

int build_ConferenceCreateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConferenceCreateAck *p = (XL_ConferenceCreateAck*)msg;
	sk_initMsg(p, TAG_ConferenceCreateAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	return 1;
}

int build_ConferenceDeleteRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConferenceDeleteRequestAck *p = (XL_ConferenceDeleteRequestAck*)msg;
	sk_initMsg(p, TAG_ConferenceDeleteRequestAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConferenceID", &p->ConferenceID)) return 0;
	return 1;
}

int build_ConnectOneWayToConferenceAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectOneWayToConferenceAck *p = (XL_ConnectOneWayToConferenceAck*)msg;
	sk_initMsg(p, TAG_ConnectOneWayToConferenceAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ConnectToConferenceAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectToConferenceAck *p = (XL_ConnectToConferenceAck*)msg;
	sk_initMsg(p, TAG_ConnectToConferenceAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ConnectWaitAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ConnectWaitAck *p = (XL_ConnectWaitAck*)msg;
	sk_initMsg(p, TAG_ConnectWaitAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_RecAnnConnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnConnectAck *p = (XL_RecAnnConnectAck*)msg;
	sk_initMsg(p, TAG_RecAnnConnectAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_RecAnnDisconnect(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnDisconnect *p = (XL_RecAnnDisconnect*)msg;
	sk_initMsg(p, TAG_RecAnnDisconnect);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_RecAnnDisconnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnDisconnectAck *p = (XL_RecAnnDisconnectAck*)msg;
	sk_initMsg(p, TAG_RecAnnDisconnectAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_CallControlInstructionsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CallControlInstructionsQuery *p = (XL_CallControlInstructionsQuery*)msg;
	sk_initMsg(p, TAG_CallControlInstructionsQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_CallControlInstructionsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CallControlInstructionsQueryAck *p = (XL_CallControlInstructionsQueryAck*)msg;
	sk_initMsg(p, TAG_CallControlInstructionsQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ChannelConnectionStatusQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelConnectionStatusQuery *p = (XL_ChannelConnectionStatusQuery*)msg;
	sk_initMsg(p, TAG_ChannelConnectionStatusQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ChannelConnectionStatusQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ChannelConnectionStatusQueryAck *p = (XL_ChannelConnectionStatusQueryAck*)msg;
	sk_initMsg(p, TAG_ChannelConnectionStatusQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelAState", &p->ChannelAState)) return 0;
	return 1;
}

int build_E1SpanFormatQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_E1SpanFormatQuery *p = (XL_E1SpanFormatQuery*)msg;
	sk_initMsg(p, TAG_E1SpanFormatQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	return 1;
}

int build_E1SpanFormatQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_E1SpanFormatQueryAck *p = (XL_E1SpanFormatQueryAck*)msg;
	sk_initMsg(p, TAG_E1SpanFormatQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LineLength", &p->LineLength)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Offset", &p->Offset)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SARegisters", &p->SARegisters)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TS16Register", &p->TS16Register)) return 0;
	return 1;
}

int build_FaultLogQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_FaultLogQuery *p = (XL_FaultLogQuery*)msg;
	sk_initMsg(p, TAG_FaultLogQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_FaultLogQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_FaultLogQueryAck *p = (XL_FaultLogQueryAck*)msg;
	sk_initMsg(p, TAG_FaultLogQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumFaults", &p->NumFaults)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FaultNumber", &p->FaultNumber)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "FaultBuffer", p->FaultBuffer)) return 0;
	return 1;
}

int build_InpulsingParametersQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_InpulsingParametersQuery *p = (XL_InpulsingParametersQuery*)msg;
	sk_initMsg(p, TAG_InpulsingParametersQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_InpulsingParametersQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_InpulsingParametersQueryAck *p = (XL_InpulsingParametersQueryAck*)msg;
	sk_initMsg(p, TAG_InpulsingParametersQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Stage1Timer", &p->Stage1Timer)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1Strings", &p->Stage1Strings)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String1Type", &p->Stage1String1Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String1Method", &p->Stage1String1Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String1MethodData", &p->Stage1String1MethodData)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String2Type", &p->Stage1String2Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String2Method", &p->Stage1String2Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage1String2MethodData", &p->Stage1String2MethodData)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Stage2Timer", &p->Stage2Timer)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2Strings", &p->Stage2Strings)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String1Type", &p->Stage2String1Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String1Method", &p->Stage2String1Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String1MethodData", &p->Stage2String1MethodData)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String2Type", &p->Stage2String2Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String2Method", &p->Stage2String2Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage2String2MethodData", &p->Stage2String2MethodData)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Stage3Timer", &p->Stage3Timer)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3Strings", &p->Stage3Strings)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String1Type", &p->Stage3String1Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String1Method", &p->Stage3String1Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String1MethodData", &p->Stage3String1MethodData)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String2Type", &p->Stage3String2Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String2Method", &p->Stage3String2Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage3String2MethodData", &p->Stage3String2MethodData)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Stage4Timer", &p->Stage4Timer)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4Strings", &p->Stage4Strings)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String1Type", &p->Stage4String1Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String1Method", &p->Stage4String1Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String1MethodData", &p->Stage4String1MethodData)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String2Type", &p->Stage4String2Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String2Method", &p->Stage4String2Method)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stage4String2MethodData", &p->Stage4String2MethodData)) return 0;
	return 1;
}

int build_PPLCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLCreate *p = (XL_PPLCreate*)msg;
	sk_initMsg(p, TAG_PPLCreate);
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ProtocolID", &p->ProtocolID)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "ProtocolName", p->ProtocolName)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumTables", &p->NumTables)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TableData", p->TableData)) return 0;
	return 1;
}

int build_PPLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLConfig *p = (XL_PPLConfig*)msg;
	sk_initMsg(p, TAG_PPLConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ConfigData", p->ConfigData)) return 0;
	return 1;
}

int build_PPLDataQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLDataQuery *p = (XL_PPLDataQuery*)msg;
	sk_initMsg(p, TAG_PPLDataQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	return 1;
}

int build_PPLDataQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLDataQueryAck *p = (XL_PPLDataQueryAck*)msg;
	sk_initMsg(p, TAG_PPLDataQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ConfigData", p->ConfigData)) return 0;
	return 1;
}

int build_PPLProtocolQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLProtocolQuery *p = (XL_PPLProtocolQuery*)msg;
	sk_initMsg(p, TAG_PPLProtocolQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EntityID", &p->EntityID)) return 0;
	return 1;
}

int build_PPLProtocolQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLProtocolQueryAck *p = (XL_PPLProtocolQueryAck*)msg;
	sk_initMsg(p, TAG_PPLProtocolQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EntityID", &p->EntityID)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLAssign *p = (XL_PPLAssign*)msg;
	sk_initMsg(p, TAG_PPLAssign);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ProtocolID", &p->ProtocolID)) return 0;
	return 1;
}

int build_PPLAuditQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLAuditQuery *p = (XL_PPLAuditQuery*)msg;
	sk_initMsg(p, TAG_PPLAuditQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditType", &p->AuditType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditBlock", &p->AuditBlock)) return 0;
	return 1;
}

int build_PPLAuditQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLAuditQueryAck *p = (XL_PPLAuditQueryAck*)msg;
	sk_initMsg(p, TAG_PPLAuditQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditType", &p->AuditType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditBlock", &p->AuditBlock)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumberAuditEntries", &p->NumberAuditEntries)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditEntryLength", &p->AuditEntryLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AuditEntries", p->AuditEntries)) return 0;
	return 1;
}

int build_PPLAuditConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLAuditConfig *p = (XL_PPLAuditConfig*)msg;
	sk_initMsg(p, TAG_PPLAuditConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AuditType", &p->AuditType)) return 0;
	return 1;
}

int build_PPLDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLDelete *p = (XL_PPLDelete*)msg;
	sk_initMsg(p, TAG_PPLDelete);
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EntityID", &p->EntityID)) return 0;
	return 1;
}

int build_PPLEventIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLEventIndication *p = (XL_PPLEventIndication*)msg;
	sk_initMsg(p, TAG_PPLEventIndication);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PPLEvent", &p->PPLEvent)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLEventRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLEventRequest *p = (XL_PPLEventRequest*)msg;
	sk_initMsg(p, TAG_PPLEventRequest);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PPLEvent", &p->PPLEvent)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLEventRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLEventRequestAck *p = (XL_PPLEventRequestAck*)msg;
	sk_initMsg(p, TAG_PPLEventRequestAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLTableDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLTableDownload *p = (XL_PPLTableDownload*)msg;
	sk_initMsg(p, TAG_PPLTableDownload);
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TableType", &p->TableType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TableID", &p->TableID)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLTableDownloadAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLTableDownloadAck *p = (XL_PPLTableDownloadAck*)msg;
	sk_initMsg(p, TAG_PPLTableDownloadAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ErrorType", &p->ErrorType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PPLInitiateDownload(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLInitiateDownload *p = (XL_PPLInitiateDownload*)msg;
	sk_initMsg(p, TAG_PPLInitiateDownload);
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TableType", &p->TableType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TableID", &p->TableID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "TableSize", &p->TableSize)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "TableName", p->TableName)) return 0;
	return 1;
}

int build_PPLTimerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLTimerConfig *p = (XL_PPLTimerConfig*)msg;
	sk_initMsg(p, TAG_PPLTimerConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TimerType", &p->TimerType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TimerID", &p->TimerID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TimerValue", &p->TimerValue)) return 0;
	return 1;
}

int build_PPLTransmitSignalConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PPLTransmitSignalConfig *p = (XL_PPLTransmitSignalConfig*)msg;
	sk_initMsg(p, TAG_PPLTransmitSignalConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ComponentID", &p->ComponentID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ProtocolSignalingState", &p->ProtocolSignalingState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignalingBits", &p->SignalingBits)) return 0;
	return 1;
}

int build_TransmitSignalingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitSignalingConfig *p = (XL_TransmitSignalingConfig*)msg;
	sk_initMsg(p, TAG_TransmitSignalingConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignallingType", &p->SignallingType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignallingValue", &p->SignallingValue)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TransmissionMode", &p->TransmissionMode)) return 0;
	return 1;
}

int build_ReceiveSignalingConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ReceiveSignalingConfig *p = (XL_ReceiveSignalingConfig*)msg;
	sk_initMsg(p, TAG_ReceiveSignalingConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignallingType", &p->SignallingType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SignallingValue", &p->SignallingValue)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TransmissionMode", &p->TransmissionMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BitMask", &p->BitMask)) return 0;
	return 1;
}

int build_TransmitToneConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitToneConfig *p = (XL_TransmitToneConfig*)msg;
	sk_initMsg(p, TAG_TransmitToneConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "UpdateFlag", &p->UpdateFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ToneType", &p->ToneType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_TransmitCadencePatternQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitCadencePatternQuery *p = (XL_TransmitCadencePatternQuery*)msg;
	sk_initMsg(p, TAG_TransmitCadencePatternQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "QueryEntity", &p->QueryEntity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Data", &p->Data)) return 0;
	return 1;
}

int build_TransmitCadencePatternQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitCadencePatternQueryAck *p = (XL_TransmitCadencePatternQueryAck*)msg;
	sk_initMsg(p, TAG_TransmitCadencePatternQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_TransmitToneQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitToneQuery *p = (XL_TransmitToneQuery*)msg;
	sk_initMsg(p, TAG_TransmitToneQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "QueryEntity", &p->QueryEntity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "QueryValue", p->QueryValue)) return 0;
	return 1;
}

int build_TransmitToneQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitToneQueryAck *p = (XL_TransmitToneQueryAck*)msg;
	sk_initMsg(p, TAG_TransmitToneQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ISDNCardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNCardConfig *p = (XL_ISDNCardConfig*)msg;
	sk_initMsg(p, TAG_ISDNCardConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Value", &p->Value)) return 0;
	return 1;
}

int build_ISDNFeatureRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNFeatureRequest *p = (XL_ISDNFeatureRequest*)msg;
	sk_initMsg(p, TAG_ISDNFeatureRequest);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ICBData", p->ICBData)) return 0;
	return 1;
}

int build_ISDNFeatureRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ISDNFeatureRequestAck *p = (XL_ISDNFeatureRequestAck*)msg;
	sk_initMsg(p, TAG_ISDNFeatureRequestAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DChannelDeAssign(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelDeAssign *p = (XL_DChannelDeAssign*)msg;
	sk_initMsg(p, TAG_DChannelDeAssign);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_DChannelConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelConfig *p = (XL_DChannelConfig*)msg;
	sk_initMsg(p, TAG_DChannelConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Value", &p->Value)) return 0;
	return 1;
}

int build_DChannelFacilityListConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelFacilityListConfig *p = (XL_DChannelFacilityListConfig*)msg;
	sk_initMsg(p, TAG_DChannelFacilityListConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "FacilitySpan", &p->FacilitySpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilityNum", &p->FacilityNum)) return 0;
	return 1;
}

int build_ResumeISDNCall(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResumeISDNCall *p = (XL_ResumeISDNCall*)msg;
	sk_initMsg(p, TAG_ResumeISDNCall);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ResumeType", &p->ResumeType)) return 0;
	return 1;
}

int build_SuspendISDNCall(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SuspendISDNCall *p = (XL_SuspendISDNCall*)msg;
	sk_initMsg(p, TAG_SuspendISDNCall);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpan", &p->StartSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StartChannel", &p->StartChannel)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpan", &p->EndSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "EndChannel", &p->EndChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SuspendType", &p->SuspendType)) return 0;
	return 1;
}

int build_StandbyLineCardConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_StandbyLineCardConfig *p = (XL_StandbyLineCardConfig*)msg;
	sk_initMsg(p, TAG_StandbyLineCardConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_LineCardSwitchover(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_LineCardSwitchover *p = (XL_LineCardSwitchover*)msg;
	sk_initMsg(p, TAG_LineCardSwitchover);
	if(!minijson_set_uchar(error_buffer, props, count, "OrigSlot", &p->OrigSlot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DestSlot", &p->DestSlot)) return 0;
	return 1;
}

int build_E1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_E1SpanConfig *p = (XL_E1SpanConfig*)msg;
	sk_initMsg(p, TAG_E1SpanConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Format", &p->Format)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LineLength", &p->LineLength)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SARegisters", &p->SARegisters)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TS16Registers", &p->TS16Registers)) return 0;
	return 1;
}

int build_J1SpanConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_J1SpanConfig *p = (XL_J1SpanConfig*)msg;
	sk_initMsg(p, TAG_J1SpanConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "StartSpanRange", &p->StartSpanRange)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "EndSpanRange", &p->EndSpanRange)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "ChanData", p->ChanData)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "FrameData", p->FrameData)) return 0;
	return 1;
}

int build_SystemConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemConfig *p = (XL_SystemConfig*)msg;
	sk_initMsg(p, TAG_SystemConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SystemConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemConfigQuery *p = (XL_SystemConfigQuery*)msg;
	sk_initMsg(p, TAG_SystemConfigQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Data", &p->Data)) return 0;
	return 1;
}

int build_SystemConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SystemConfigQueryAck *p = (XL_SystemConfigQueryAck*)msg;
	sk_initMsg(p, TAG_SystemConfigQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_LoopBackConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_LoopBackConfig *p = (XL_LoopBackConfig*)msg;
	sk_initMsg(p, TAG_LoopBackConfig);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LoopbackType", &p->LoopbackType)) return 0;
	return 1;
}

int build_LoopBackConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_LoopBackConfigAck *p = (XL_LoopBackConfigAck*)msg;
	sk_initMsg(p, TAG_LoopBackConfigAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LoopbackType", &p->LoopbackType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LoopbackStatus", &p->LoopbackStatus)) return 0;
	return 1;
}

int build_RecAnnDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecAnnDelete *p = (XL_RecAnnDelete*)msg;
	sk_initMsg(p, TAG_RecAnnDelete);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SIMM", &p->SIMM)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ForcedFlag", &p->ForcedFlag)) return 0;
	return 1;
}

int build_BChannelQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BChannelQuery *p = (XL_BChannelQuery*)msg;
	sk_initMsg(p, TAG_BChannelQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_BChannelQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_BChannelQueryAck *p = (XL_BChannelQueryAck*)msg;
	sk_initMsg(p, TAG_BChannelQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DChannelID", &p->DChannelID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Facility", &p->Facility)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BChannel", &p->BChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CurrentState", &p->CurrentState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PriDEnable", &p->PriDEnable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PriBEnable", &p->PriBEnable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ExternalEnable", &p->ExternalEnable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "HostEnable", &p->HostEnable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ControllingDChannelFlag", &p->ControllingDChannelFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NetworkType", &p->NetworkType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallType", &p->CallType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallingType", &p->CallingType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallingNumberPlanID", &p->CallingNumberPlanID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallingPresentationInd", &p->CallingPresentationInd)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallingScreeningInd", &p->CallingScreeningInd)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CalledType", &p->CalledType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CalledNumberPlanID", &p->CalledNumberPlanID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "PCMEncodingFormat", &p->PCMEncodingFormat)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DistantEndReleaseMode", &p->DistantEndReleaseMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AnswerSupervisionMode", &p->AnswerSupervisionMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISDNEventEnable", &p->ISDNEventEnable)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LocalEndReleaseMode", &p->LocalEndReleaseMode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NetworkBlocked", &p->NetworkBlocked)) return 0;
	return 1;
}

int build_DChannelQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelQuery *p = (XL_DChannelQuery*)msg;
	sk_initMsg(p, TAG_DChannelQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_DChannelQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelQueryAck *p = (XL_DChannelQueryAck*)msg;
	sk_initMsg(p, TAG_DChannelQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConnectionType", &p->ConnectionType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NetworkAllowedCallType", &p->NetworkAllowedCallType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DChannelFacilityListQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelFacilityListQuery *p = (XL_DChannelFacilityListQuery*)msg;
	sk_initMsg(p, TAG_DChannelFacilityListQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_DChannelFacilityListQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DChannelFacilityListQueryAck *p = (XL_DChannelFacilityListQueryAck*)msg;
	sk_initMsg(p, TAG_DChannelFacilityListQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan0", &p->FacilitySpan0)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan1", &p->FacilitySpan1)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan2", &p->FacilitySpan2)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan3", &p->FacilitySpan3)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan4", &p->FacilitySpan4)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan5", &p->FacilitySpan5)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan6", &p->FacilitySpan6)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan7", &p->FacilitySpan7)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan8", &p->FacilitySpan8)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FacilitySpan9", &p->FacilitySpan9)) return 0;
	return 1;
}

int build_CPAConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPAConfigQuery *p = (XL_CPAConfigQuery*)msg;
	sk_initMsg(p, TAG_CPAConfigQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "QueryEntity", &p->QueryEntity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	return 1;
}

int build_CPAConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CPAConfigQueryAck *p = (XL_CPAConfigQueryAck*)msg;
	sk_initMsg(p, TAG_CPAConfigQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DSPServiceCancel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DSPServiceCancel *p = (XL_DSPServiceCancel*)msg;
	sk_initMsg(p, TAG_DSPServiceCancel);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ServiceType", &p->ServiceType)) return 0;
	return 1;
}

int build_DSPServiceRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DSPServiceRequest *p = (XL_DSPServiceRequest*)msg;
	sk_initMsg(p, TAG_DSPServiceRequest);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ServiceType", &p->ServiceType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ReleaseWithData(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ReleaseWithData *p = (XL_ReleaseWithData*)msg;
	sk_initMsg(p, TAG_ReleaseWithData);
	if(!minijson_set_ushort(error_buffer, props, count, "SpanA", &p->SpanA)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelA", &p->ChannelA)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SpanB", &p->SpanB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ChannelB", &p->ChannelB)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ReleaseDataType", &p->ReleaseDataType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_TransmitCadencePatternConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_TransmitCadencePatternConfig *p = (XL_TransmitCadencePatternConfig*)msg;
	sk_initMsg(p, TAG_TransmitCadencePatternConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "UpdateFlag", &p->UpdateFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7CICConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CICConfig *p = (XL_SS7CICConfig*)msg;
	sk_initMsg(p, TAG_SS7CICConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICNumber", &p->BaseCICNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICSpan", &p->BaseCICSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BaseCICChannel", &p->BaseCICChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DPC", &p->DPC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallControlUserPart", &p->CallControlUserPart)) return 0;
	return 1;
}

int build_SS7CICQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CICQuery *p = (XL_SS7CICQuery*)msg;
	sk_initMsg(p, TAG_SS7CICQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DPC", &p->DPC)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCIC", &p->BaseCIC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CallControlUserPart", &p->CallControlUserPart)) return 0;
	return 1;
}

int build_SS7CICQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7CICQueryAck *p = (XL_SS7CICQueryAck*)msg;
	sk_initMsg(p, TAG_SS7CICQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICNumber", &p->BaseCICNumber)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "BaseCICSpan", &p->BaseCICSpan)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "BaseCICChannel", &p->BaseCICChannel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumCICs", &p->NumCICs)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DPC", &p->DPC)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7ISUPMessageFormatConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7ISUPMessageFormatConfig *p = (XL_SS7ISUPMessageFormatConfig*)msg;
	sk_initMsg(p, TAG_SS7ISUPMessageFormatConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessageIndex", &p->ISUPMessageIndex)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessageID", &p->ISUPMessageID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessagePriority", &p->ISUPMessagePriority)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumMFPs", &p->NumMFPs)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7ISUPMessageQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7ISUPMessageQuery *p = (XL_SS7ISUPMessageQuery*)msg;
	sk_initMsg(p, TAG_SS7ISUPMessageQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessageIndex", &p->ISUPMessageIndex)) return 0;
	return 1;
}

int build_SS7ISUPMessageQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7ISUPMessageQueryAck *p = (XL_SS7ISUPMessageQueryAck*)msg;
	sk_initMsg(p, TAG_SS7ISUPMessageQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessageIndex", &p->ISUPMessageIndex)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessageID", &p->ISUPMessageID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ISUPMessagePriority", &p->ISUPMessagePriority)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumMFPs", &p->NumMFPs)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7TUPMessageFormatConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7TUPMessageFormatConfig *p = (XL_SS7TUPMessageFormatConfig*)msg;
	sk_initMsg(p, TAG_SS7TUPMessageFormatConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TUPMessageIndex", &p->TUPMessageIndex)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MCTEntry", &p->MCTEntry)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H0Length", &p->H0Length)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H0Value", &p->H0Value)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H1Length", &p->H1Length)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H1Value", &p->H1Value)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "MsgAttributes", &p->MsgAttributes)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7TUPMessageQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7TUPMessageQuery *p = (XL_SS7TUPMessageQuery*)msg;
	sk_initMsg(p, TAG_SS7TUPMessageQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TUPMessageIndex", &p->TUPMessageIndex)) return 0;
	return 1;
}

int build_SS7TUPMessageQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7TUPMessageQueryAck *p = (XL_SS7TUPMessageQueryAck*)msg;
	sk_initMsg(p, TAG_SS7TUPMessageQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TUPMessageIndex", &p->TUPMessageIndex)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MCTEntry", &p->MCTEntry)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H0Length", &p->H0Length)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H0Value", &p->H0Value)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H1Length", &p->H1Length)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "H1Value", &p->H1Value)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "MsgAttributes", &p->MsgAttributes)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SignalingStackConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingStackConfig *p = (XL_SS7SignalingStackConfig*)msg;
	sk_initMsg(p, TAG_SS7SignalingStackConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Stack", &p->Stack)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "OPC", &p->OPC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumModules", &p->NumModules)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SignalingStackQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingStackQuery *p = (XL_SS7SignalingStackQuery*)msg;
	sk_initMsg(p, TAG_SS7SignalingStackQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	return 1;
}

int build_SS7SignalingStackQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingStackQueryAck *p = (XL_SS7SignalingStackQueryAck*)msg;
	sk_initMsg(p, TAG_SS7SignalingStackQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "OPC", &p->OPC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumModules", &p->NumModules)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SignalingLinkSetConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkSetConfig *p = (XL_SS7SignalingLinkSetConfig*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkSetConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "APC", &p->APC)) return 0;
	return 1;
}

int build_SS7SignalingLinkSetQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkSetQuery *p = (XL_SS7SignalingLinkSetQuery*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkSetQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	return 1;
}

int build_SS7SignalingLinkSetQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkSetQueryAck *p = (XL_SS7SignalingLinkSetQueryAck*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkSetQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumLinkSets", &p->NumLinkSets)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SignalingLinkConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkConfig *p = (XL_SS7SignalingLinkConfig*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkID", &p->LinkID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SLC", &p->SLC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataRate", &p->DataRate)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ElectricalInterface", &p->ElectricalInterface)) return 0;
	return 1;
}

int build_SS7SignalingLinkQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkQuery *p = (XL_SS7SignalingLinkQuery*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	return 1;
}

int build_SS7SignalingLinkQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingLinkQueryAck *p = (XL_SS7SignalingLinkQueryAck*)msg;
	sk_initMsg(p, TAG_SS7SignalingLinkQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumLinks", &p->NumLinks)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SS7SignalingRouteConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingRouteConfig *p = (XL_SS7SignalingRouteConfig*)msg;
	sk_initMsg(p, TAG_SS7SignalingRouteConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Destination", &p->Destination)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RouteID", &p->RouteID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DPC", &p->DPC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority", &p->Priority)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CombinedLinkSetRef", &p->CombinedLinkSetRef)) return 0;
	return 1;
}

int build_SS7SignalingRouteQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingRouteQuery *p = (XL_SS7SignalingRouteQuery*)msg;
	sk_initMsg(p, TAG_SS7SignalingRouteQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Destination", &p->Destination)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RouteID", &p->RouteID)) return 0;
	return 1;
}

int build_SS7SignalingRouteQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SS7SignalingRouteQueryAck *p = (XL_SS7SignalingRouteQueryAck*)msg;
	sk_initMsg(p, TAG_SS7SignalingRouteQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Destination", &p->Destination)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RouteID", &p->RouteID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DPC", &p->DPC)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "LinkSetID", &p->LinkSetID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Priority", &p->Priority)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DestinationStatus", &p->DestinationStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RouteStatus", &p->RouteStatus)) return 0;
	return 1;
}

int build_WriteCfgFile(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WriteCfgFile *p = (SK_WriteCfgFile*)msg;
	sk_initMsg(p, TAG_WriteCfgFile);
	if(!minijson_set_char_array(error_buffer, props, count, "Filename", p->Filename)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Options", &p->Options)) return 0;
	return 1;
}

int build_WriteCfgFileAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WriteCfgFileAck *p = (SK_WriteCfgFileAck*)msg;
	sk_initMsg(p, TAG_WriteCfgFileAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AssignPanelID(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AssignPanelID *p = (SK_AssignPanelID*)msg;
	sk_initMsg(p, TAG_AssignPanelID);
	if(!minijson_set_uchar(error_buffer, props, count, "PanelID", &p->PanelID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RelatedNode", &p->RelatedNode)) return 0;
	return 1;
}

int build_ConfigureExternalAlarms(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigureExternalAlarms *p = (SK_ConfigureExternalAlarms*)msg;
	sk_initMsg(p, TAG_ConfigureExternalAlarms);
	if(!minijson_set_uchar(error_buffer, props, count, "PanelID", &p->PanelID)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AlarmID", p->AlarmID)) return 0;
	return 1;
}

int build_ConfigurePager(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigurePager *p = (SK_ConfigurePager*)msg;
	sk_initMsg(p, TAG_ConfigurePager);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Number", p->Number)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Pin", p->Pin)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	return 1;
}

int build_DS3GenericMessage(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DS3GenericMessage *p = (XL_DS3GenericMessage*)msg;
	sk_initMsg(p, TAG_DS3GenericMessage);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DS3", &p->DS3)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLength", &p->DataLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DS3GenericMessageAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DS3GenericMessageAck *p = (XL_DS3GenericMessageAck*)msg;
	sk_initMsg(p, TAG_DS3GenericMessageAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DS3", &p->DS3)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLength", &p->DataLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SNMPConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SNMPConfig *p = (XL_SNMPConfig*)msg;
	sk_initMsg(p, TAG_SNMPConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DS3", &p->DS3)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Period", &p->Period)) return 0;
	return 1;
}

int build_CallDetailRecord(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_CallDetailRecord *p = (XL_CallDetailRecord*)msg;
	sk_initMsg(p, TAG_CallDetailRecord);
	if(!minijson_set_ushort(error_buffer, props, count, "NodeInSessionID", &p->NodeInSessionID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "SessionCounter", &p->SessionCounter)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "NodeInCallID", &p->NodeInCallID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "CallCounter", &p->CallCounter)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ICBCount", &p->ICBCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SSLConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SSLConfig *p = (XL_SSLConfig*)msg;
	sk_initMsg(p, TAG_SSLConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SSLQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SSLQuery *p = (XL_SSLQuery*)msg;
	sk_initMsg(p, TAG_SSLQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Entity", &p->Entity)) return 0;
	return 1;
}

int build_SSLQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_SSLQueryAck *p = (XL_SSLQueryAck*)msg;
	sk_initMsg(p, TAG_SSLQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_AddLLCNode(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCNode *p = (SK_AddLLCNode*)msg;
	sk_initMsg(p, TAG_AddLLCNode);
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix1", p->Matrix1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix2", p->Matrix2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RequestedNode", &p->RequestedNode)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "PhysicalNode", &p->PhysicalNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "NodeType", &p->NodeType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CallControlNode", &p->CallControlNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SeqNumWidth", &p->SeqNumWidth)) return 0;
	return 1;
}

int build_AddLLCNodeAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCNodeAck *p = (SK_AddLLCNodeAck*)msg;
	sk_initMsg(p, TAG_AddLLCNodeAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "ActualNode", &p->ActualNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DownloadStatus", &p->DownloadStatus)) return 0;
	return 1;
}

int build_AddLLCCard(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCCard *p = (SK_AddLLCCard*)msg;
	sk_initMsg(p, TAG_AddLLCCard);
	if(!minijson_set_char_array(error_buffer, props, count, "CardIP1", p->CardIP1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CardIP2", p->CardIP2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RoutingID", &p->RoutingID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "ControlNode", &p->ControlNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_AddLLCCardAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCCardAck *p = (SK_AddLLCCardAck*)msg;
	sk_initMsg(p, TAG_AddLLCCardAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RoutingID", &p->RoutingID)) return 0;
	return 1;
}

int build_AddSS7TCAPCard(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddSS7TCAPCard *p = (SK_AddSS7TCAPCard*)msg;
	sk_initMsg(p, TAG_AddSS7TCAPCard);
	if(!minijson_set_char_array(error_buffer, props, count, "CardIP1", p->CardIP1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CardIP2", p->CardIP2)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StackID", &p->StackID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SSN", &p->SSN)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "ControlNode", &p->ControlNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_RemoveLLCRoutingID(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RemoveLLCRoutingID *p = (SK_RemoveLLCRoutingID*)msg;
	sk_initMsg(p, TAG_RemoveLLCRoutingID);
	if(!minijson_set_int(error_buffer, props, count, "RoutingID", &p->RoutingID)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	return 1;
}

int build_RemoveLLCRoutingIDAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RemoveLLCRoutingIDAck *p = (SK_RemoveLLCRoutingIDAck*)msg;
	sk_initMsg(p, TAG_RemoveLLCRoutingIDAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RoutingID", &p->RoutingID)) return 0;
	return 1;
}

int build_AddLLCTCAPNode(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCTCAPNode *p = (SK_AddLLCTCAPNode*)msg;
	sk_initMsg(p, TAG_AddLLCTCAPNode);
	if(!minijson_set_char_array(error_buffer, props, count, "CCSIP1", p->CCSIP1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "CCSIP2", p->CCSIP2)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_AddLLCTCAPNodeAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddLLCTCAPNodeAck *p = (SK_AddLLCTCAPNodeAck*)msg;
	sk_initMsg(p, TAG_AddLLCTCAPNodeAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "ActualNode", &p->ActualNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DownloadStatus", &p->DownloadStatus)) return 0;
	return 1;
}

int build_WatchDogRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WatchDogRegister *p = (SK_WatchDogRegister*)msg;
	sk_initMsg(p, TAG_WatchDogRegister);
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "ShutdownTimeout", &p->ShutdownTimeout)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_WatchDogRegisterAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WatchDogRegisterAck *p = (SK_WatchDogRegisterAck*)msg;
	sk_initMsg(p, TAG_WatchDogRegisterAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_WatchDogStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_WatchDogStatusMsg *p = (SK_WatchDogStatusMsg*)msg;
	sk_initMsg(p, TAG_WatchDogStatusMsg);
	if(!minijson_set_uchar(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_ConfigStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigStatusMsg *p = (SK_ConfigStatusMsg*)msg;
	sk_initMsg(p, TAG_ConfigStatusMsg);
	if(!minijson_set_uchar(error_buffer, props, count, "Event", &p->Event)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumMsgsSent", &p->NumMsgsSent)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumMsgsNacked", &p->NumMsgsNacked)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "CardType", &p->CardType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	return 1;
}

int build_VirtualSlotConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VirtualSlotConfig *p = (XL_VirtualSlotConfig*)msg;
	sk_initMsg(p, TAG_VirtualSlotConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_VirtualSpanControl(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_VirtualSpanControl *p = (XL_VirtualSpanControl*)msg;
	sk_initMsg(p, TAG_VirtualSpanControl);
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Event", &p->Event)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_UpgradeQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_UpgradeQuery *p = (XL_UpgradeQuery*)msg;
	sk_initMsg(p, TAG_UpgradeQuery);
	return 1;
}

int build_UpgradeQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_UpgradeQueryAck *p = (XL_UpgradeQueryAck*)msg;
	sk_initMsg(p, TAG_UpgradeQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "UpgradeList", p->UpgradeList)) return 0;
	return 1;
}

int build_UpgradeDownloadBegin(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_UpgradeDownloadBegin *p = (XL_UpgradeDownloadBegin*)msg;
	sk_initMsg(p, TAG_UpgradeDownloadBegin);
	return 1;
}

int build_UpgradeActivate(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_UpgradeActivate *p = (XL_UpgradeActivate*)msg;
	sk_initMsg(p, TAG_UpgradeActivate);
	if(!minijson_set_uchar(error_buffer, props, count, "UpgradeID", &p->UpgradeID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_UpgradeSoftwarePatch(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_UpgradeSoftwarePatch *p = (SK_UpgradeSoftwarePatch*)msg;
	sk_initMsg(p, TAG_UpgradeSoftwarePatch);
	if(!minijson_set_char_array(error_buffer, props, count, "Filename", p->Filename)) return 0;
	return 1;
}

int build_UpgradeSoftwarePatchAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_UpgradeSoftwarePatchAck *p = (SK_UpgradeSoftwarePatchAck*)msg;
	sk_initMsg(p, TAG_UpgradeSoftwarePatchAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_AdjustMessageTimeout(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AdjustMessageTimeout *p = (SK_AdjustMessageTimeout*)msg;
	sk_initMsg(p, TAG_AdjustMessageTimeout);
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "TimeoutIncr", &p->TimeoutIncr)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NumApps", &p->NumApps)) return 0;
	return 1;
}

int build_AdjustMessageTimeoutAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AdjustMessageTimeoutAck *p = (SK_AdjustMessageTimeoutAck*)msg;
	sk_initMsg(p, TAG_AdjustMessageTimeoutAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_TCAPMessageRegister(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_TCAPMessageRegister *p = (SK_TCAPMessageRegister*)msg;
	sk_initMsg(p, TAG_TCAPMessageRegister);
	if(!minijson_set_int(error_buffer, props, count, "OPC", &p->OPC)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "STACK_SSN", &p->STACK_SSN)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "SSN", &p->SSN)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RegisterType", &p->RegisterType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RegisterFlag", &p->RegisterFlag)) return 0;
	return 1;
}

int build_TCAPMessageRegisterAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_TCAPMessageRegisterAck *p = (SK_TCAPMessageRegisterAck*)msg;
	sk_initMsg(p, TAG_TCAPMessageRegisterAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_SwitchBackFromStandby(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SwitchBackFromStandby *p = (SK_SwitchBackFromStandby*)msg;
	sk_initMsg(p, TAG_SwitchBackFromStandby);
	if(!minijson_set_uchar(error_buffer, props, count, "StandbySlot", &p->StandbySlot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_SwitchBackFromStandbyConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SwitchBackFromStandbyConfig *p = (SK_SwitchBackFromStandbyConfig*)msg;
	sk_initMsg(p, TAG_SwitchBackFromStandbyConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "StandbySlot", &p->StandbySlot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_SwitchBackFromStandbyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SwitchBackFromStandbyAck *p = (SK_SwitchBackFromStandbyAck*)msg;
	sk_initMsg(p, TAG_SwitchBackFromStandbyAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_RegisterAsRedundantApp(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RegisterAsRedundantApp *p = (SK_RegisterAsRedundantApp*)msg;
	sk_initMsg(p, TAG_RegisterAsRedundantApp);
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RedundantAppPriority", &p->RedundantAppPriority)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "InitiateSwitchover", &p->InitiateSwitchover)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RegisterAsRedundantAppAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RegisterAsRedundantAppAck *p = (SK_RegisterAsRedundantAppAck*)msg;
	sk_initMsg(p, TAG_RegisterAsRedundantAppAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RedundantAppPriority", &p->RedundantAppPriority)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "InitiateSwitchover", &p->InitiateSwitchover)) return 0;
	return 1;
}

int build_ReselectPrimaryApp(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ReselectPrimaryApp *p = (SK_ReselectPrimaryApp*)msg;
	sk_initMsg(p, TAG_ReselectPrimaryApp);
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Flag", &p->Flag)) return 0;
	return 1;
}

int build_ReselectPrimaryAppAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ReselectPrimaryAppAck *p = (SK_ReselectPrimaryAppAck*)msg;
	sk_initMsg(p, TAG_ReselectPrimaryAppAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	return 1;
}

int build_RedundantAppStatusMsg(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppStatusMsg *p = (SK_RedundantAppStatusMsg*)msg;
	sk_initMsg(p, TAG_RedundantAppStatusMsg);
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RedundancyStatus", &p->RedundancyStatus)) return 0;
	return 1;
}

int build_ConfigSwitch(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigSwitch *p = (SK_ConfigSwitch*)msg;
	sk_initMsg(p, TAG_ConfigSwitch);
	if(!minijson_set_uchar(error_buffer, props, count, "Target", &p->Target)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Type", &p->Type)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MsgFormat", &p->MsgFormat)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Offline", &p->Offline)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag1", &p->Tag1)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Tag2", &p->Tag2)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppGroupTarget", p->AppGroupTarget)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ConfigSwitchAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ConfigSwitchAck *p = (SK_ConfigSwitchAck*)msg;
	sk_initMsg(p, TAG_ConfigSwitchAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "XLStatus", &p->XLStatus)) return 0;
	return 1;
}

int build_RedundantAppPoolsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppPoolsQuery *p = (SK_RedundantAppPoolsQuery*)msg;
	sk_initMsg(p, TAG_RedundantAppPoolsQuery);
	return 1;
}

int build_RedundantAppPoolsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppPoolsQueryAck *p = (SK_RedundantAppPoolsQueryAck*)msg;
	sk_initMsg(p, TAG_RedundantAppPoolsQueryAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "NumRAPs", &p->NumRAPs)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RedundantAppPoolMembersQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppPoolMembersQuery *p = (SK_RedundantAppPoolMembersQuery*)msg;
	sk_initMsg(p, TAG_RedundantAppPoolMembersQuery);
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	return 1;
}

int build_RedundantAppQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppQuery *p = (SK_RedundantAppQuery*)msg;
	sk_initMsg(p, TAG_RedundantAppQuery);
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	return 1;
}

int build_RedundantAppQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RedundantAppQueryAck *p = (SK_RedundantAppQueryAck*)msg;
	sk_initMsg(p, TAG_RedundantAppQueryAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedundantAppPoolID", p->RedundantAppPoolID)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AppName", &p->AppName)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RedundantAppPriority", &p->RedundantAppPriority)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "IsPrimary", &p->IsPrimary)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ClearLog(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearLog *p = (SK_ClearLog*)msg;
	sk_initMsg(p, TAG_ClearLog);
	if(!minijson_set_uchar(error_buffer, props, count, "LoggingBitMask", &p->LoggingBitMask)) return 0;
	return 1;
}

int build_ClearLogAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ClearLogAck *p = (SK_ClearLogAck*)msg;
	sk_initMsg(p, TAG_ClearLogAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_CreateNodeGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_CreateNodeGroup *p = (SK_CreateNodeGroup*)msg;
	sk_initMsg(p, TAG_CreateNodeGroup);
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Control", &p->Control)) return 0;
	return 1;
}

int build_CreateNodeGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_CreateNodeGroupAck *p = (SK_CreateNodeGroupAck*)msg;
	sk_initMsg(p, TAG_CreateNodeGroupAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Control", &p->Control)) return 0;
	return 1;
}

int build_AssocNodeGroups(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AssocNodeGroups *p = (SK_AssocNodeGroups*)msg;
	sk_initMsg(p, TAG_AssocNodeGroups);
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName1", p->GroupName1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName2", p->GroupName2)) return 0;
	return 1;
}

int build_AssocNodeGroupsAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AssocNodeGroupsAck *p = (SK_AssocNodeGroupsAck*)msg;
	sk_initMsg(p, TAG_AssocNodeGroupsAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName1", p->GroupName1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName2", p->GroupName2)) return 0;
	return 1;
}

int build_AddNodeToGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddNodeToGroup *p = (SK_AddNodeToGroup*)msg;
	sk_initMsg(p, TAG_AddNodeToGroup);
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix1", p->Matrix1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix2", p->Matrix2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RequestedNode", &p->RequestedNode)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_AddNodeToGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_AddNodeToGroupAck *p = (SK_AddNodeToGroupAck*)msg;
	sk_initMsg(p, TAG_AddNodeToGroupAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix1", p->Matrix1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix2", p->Matrix2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RequestedNode", &p->RequestedNode)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_LLCQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_LLCQuery *p = (SK_LLCQuery*)msg;
	sk_initMsg(p, TAG_LLCQuery);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_LLCQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_LLCQueryAck *p = (SK_LLCQueryAck*)msg;
	sk_initMsg(p, TAG_LLCQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_CreateConnection(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_CreateConnection *p = (SK_CreateConnection*)msg;
	sk_initMsg(p, TAG_CreateConnection);
	if(!minijson_set_ushort(error_buffer, props, count, "ConnectionID", &p->ConnectionID)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "PriHost", p->PriHost)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "RedHost", p->RedHost)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PriPort", &p->PriPort)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "RedPort", &p->RedPort)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	return 1;
}

int build_DeviceServerEx(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_DeviceServerEx *p = (SK_DeviceServerEx*)msg;
	sk_initMsg(p, TAG_DeviceServerEx);
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Id", &p->Id)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CallServerId", &p->CallServerId)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ConfigTag", &p->ConfigTag)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "CompatFlag", &p->CompatFlag)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PollInterval", &p->PollInterval)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "AllowedMissedPolls", &p->AllowedMissedPolls)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Port", &p->Port)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "PrimaryCSPort", &p->PrimaryCSPort)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "SecondaryCSPort", &p->SecondaryCSPort)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "IpAddress", p->IpAddress)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "PrimaryCSIpAddress", p->PrimaryCSIpAddress)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "SecondaryCSIpAddress", p->SecondaryCSIpAddress)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "DeviceType", &p->DeviceType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Platform", &p->Platform)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "IPDCUsage", &p->IPDCUsage)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "LinkdownTimer", &p->LinkdownTimer)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "DSInterfaceSupport", p->DSInterfaceSupport)) return 0;
	return 1;
}

int build_DeviceServerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DeviceServerConfig *p = (XL_DeviceServerConfig*)msg;
	sk_initMsg(p, TAG_DeviceServerConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ConfigType", &p->ConfigType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DeviceServerQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DeviceServerQuery *p = (XL_DeviceServerQuery*)msg;
	sk_initMsg(p, TAG_DeviceServerQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	return 1;
}

int build_DeviceServerQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DeviceServerQueryAck *p = (XL_DeviceServerQueryAck*)msg;
	sk_initMsg(p, TAG_DeviceServerQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DeviceServerStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DeviceServerStatusReport *p = (XL_DeviceServerStatusReport*)msg;
	sk_initMsg(p, TAG_DeviceServerStatusReport);
	if(!minijson_set_ushort(error_buffer, props, count, "DeviceServer", &p->DeviceServer)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPSocketConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPSocketConfig *p = (XL_IPSocketConfig*)msg;
	sk_initMsg(p, TAG_IPSocketConfig);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPSocketQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPSocketQuery *p = (XL_IPSocketQuery*)msg;
	sk_initMsg(p, TAG_IPSocketQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPSocketQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPSocketQueryAck *p = (XL_IPSocketQueryAck*)msg;
	sk_initMsg(p, TAG_IPSocketQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_IPSocketStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_IPSocketStatusReport *p = (XL_IPSocketStatusReport*)msg;
	sk_initMsg(p, TAG_IPSocketStatusReport);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GELConfigQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GELConfigQuery *p = (XL_GELConfigQuery*)msg;
	sk_initMsg(p, TAG_GELConfigQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataLength", &p->DataLength)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GELConfigQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GELConfigQueryAck *p = (XL_GELConfigQueryAck*)msg;
	sk_initMsg(p, TAG_GELConfigQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ServerStatusChange(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ServerStatusChange *p = (SK_ServerStatusChange*)msg;
	sk_initMsg(p, TAG_ServerStatusChange);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SystemType", &p->SystemType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixSide", &p->MatrixSide)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MatrixState", &p->MatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AdjMatrixState", &p->AdjMatrixState)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "StatusBits", &p->StatusBits)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExcelPort", &p->ExcelPort)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "PhysicalNode", &p->PhysicalNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "LogicalNode", &p->LogicalNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "HostNode", &p->HostNode)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "NodeStatus", &p->NodeStatus)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "MessageTrigger", &p->MessageTrigger)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FromPrimary", &p->FromPrimary)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "SocketStatus", &p->SocketStatus)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "UpdatedFieldBits", &p->UpdatedFieldBits)) return 0;
	return 1;
}

int build_HostAlarm(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_HostAlarm *p = (SK_HostAlarm*)msg;
	sk_initMsg(p, TAG_HostAlarm);
	if(!minijson_set_uchar(error_buffer, props, count, "IPAddrofSenderSize", &p->IPAddrofSenderSize)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppName", p->AppName)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "AlarmTime", &p->AlarmTime)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "IPAddrofSender", p->IPAddrofSender)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmMajor", &p->AlarmMajor)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmSubType", &p->AlarmSubType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AlarmSeverity", &p->AlarmSeverity)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_HostAlarmAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_HostAlarmAck *p = (SK_HostAlarmAck*)msg;
	sk_initMsg(p, TAG_HostAlarmAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	return 1;
}

int build_ServerConfig(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerConfig *p = (XL_ServerConfig*)msg;
	sk_initMsg(p, TAG_ServerConfig);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_ServerConfigAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerConfigAck *p = (XL_ServerConfigAck*)msg;
	sk_initMsg(p, TAG_ServerConfigAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	return 1;
}

int build_ServerQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerQuery *p = (XL_ServerQuery*)msg;
	sk_initMsg(p, TAG_ServerQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	return 1;
}

int build_ServerQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerQueryAck *p = (XL_ServerQueryAck*)msg;
	sk_initMsg(p, TAG_ServerQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ExpandedNode", &p->ExpandedNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectType", &p->ObjectType)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "ObjectInstanceID", &p->ObjectInstanceID)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "TLVData", p->TLVData)) return 0;
	return 1;
}

int build_ServerStatusReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerStatusReport *p = (XL_ServerStatusReport*)msg;
	sk_initMsg(p, TAG_ServerStatusReport);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ServerHostPoll(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ServerHostPoll *p = (XL_ServerHostPoll*)msg;
	sk_initMsg(p, TAG_ServerHostPoll);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RemoveNodeFromGroup(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RemoveNodeFromGroup *p = (SK_RemoveNodeFromGroup*)msg;
	sk_initMsg(p, TAG_RemoveNodeFromGroup);
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix1", p->Matrix1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix2", p->Matrix2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RequestedNode", &p->RequestedNode)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_RemoveNodeFromGroupAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_RemoveNodeFromGroupAck *p = (SK_RemoveNodeFromGroupAck*)msg;
	sk_initMsg(p, TAG_RemoveNodeFromGroupAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix1", p->Matrix1)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "Matrix2", p->Matrix2)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RequestedNode", &p->RequestedNode)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "GroupName", p->GroupName)) return 0;
	return 1;
}

int build_GenericLLCReport(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_GenericLLCReport *p = (SK_GenericLLCReport*)msg;
	sk_initMsg(p, TAG_GenericLLCReport);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ReportType", &p->ReportType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GenericCardConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenericCardConfigure *p = (XL_GenericCardConfigure*)msg;
	sk_initMsg(p, TAG_GenericCardConfigure);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GenericCardConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenericCardConfigureAck *p = (XL_GenericCardConfigureAck*)msg;
	sk_initMsg(p, TAG_GenericCardConfigureAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_DSPCacheModify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_DSPCacheModify *p = (XL_DSPCacheModify*)msg;
	sk_initMsg(p, TAG_DSPCacheModify);
	if(!minijson_set_uchar(error_buffer, props, count, "Slot", &p->Slot)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GenericCardQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenericCardQuery *p = (XL_GenericCardQuery*)msg;
	sk_initMsg(p, TAG_GenericCardQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_GenericCardQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_GenericCardQueryAck *p = (XL_GenericCardQueryAck*)msg;
	sk_initMsg(p, TAG_GenericCardQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PlayFileStart(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileStart *p = (XL_PlayFileStart*)msg;
	sk_initMsg(p, TAG_PlayFileStart);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "FileCount", &p->FileCount)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PlayFileStartAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileStartAck *p = (XL_PlayFileStartAck*)msg;
	sk_initMsg(p, TAG_PlayFileStartAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_PlayFileModify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileModify *p = (XL_PlayFileModify*)msg;
	sk_initMsg(p, TAG_PlayFileModify);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PlayFileModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileModifyAck *p = (XL_PlayFileModifyAck*)msg;
	sk_initMsg(p, TAG_PlayFileModifyAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_PlayFileStop(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileStop *p = (XL_PlayFileStop*)msg;
	sk_initMsg(p, TAG_PlayFileStop);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_PlayFileStopAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_PlayFileStopAck *p = (XL_PlayFileStopAck*)msg;
	sk_initMsg(p, TAG_PlayFileStopAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_RecordFileModify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileModify *p = (XL_RecordFileModify*)msg;
	sk_initMsg(p, TAG_RecordFileModify);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Action", &p->Action)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RecordFileModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileModifyAck *p = (XL_RecordFileModifyAck*)msg;
	sk_initMsg(p, TAG_RecordFileModifyAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_RecordFileStop(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileStop *p = (XL_RecordFileStop*)msg;
	sk_initMsg(p, TAG_RecordFileStop);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_RecordFileStopAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileStopAck *p = (XL_RecordFileStopAck*)msg;
	sk_initMsg(p, TAG_RecordFileStopAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_RecordFileStart(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileStart *p = (XL_RecordFileStart*)msg;
	sk_initMsg(p, TAG_RecordFileStart);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_RecordFileStartAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_RecordFileStartAck *p = (XL_RecordFileStartAck*)msg;
	sk_initMsg(p, TAG_RecordFileStartAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	return 1;
}

int build_StatisticsQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_StatisticsQuery *p = (XL_StatisticsQuery*)msg;
	sk_initMsg(p, TAG_StatisticsQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_StatisticsQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_StatisticsQueryAck *p = (XL_StatisticsQueryAck*)msg;
	sk_initMsg(p, TAG_StatisticsQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceCreate(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceCreate *p = (XL_ResourceCreate*)msg;
	sk_initMsg(p, TAG_ResourceCreate);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceCreateAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceCreateAck *p = (XL_ResourceCreateAck*)msg;
	sk_initMsg(p, TAG_ResourceCreateAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceModify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceModify *p = (XL_ResourceModify*)msg;
	sk_initMsg(p, TAG_ResourceModify);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceModifyAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceModifyAck *p = (XL_ResourceModifyAck*)msg;
	sk_initMsg(p, TAG_ResourceModifyAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceDelete(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceDelete *p = (XL_ResourceDelete*)msg;
	sk_initMsg(p, TAG_ResourceDelete);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceDeleteAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceDeleteAck *p = (XL_ResourceDeleteAck*)msg;
	sk_initMsg(p, TAG_ResourceDeleteAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceConnect(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceConnect *p = (XL_ResourceConnect*)msg;
	sk_initMsg(p, TAG_ResourceConnect);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceConnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceConnectAck *p = (XL_ResourceConnectAck*)msg;
	sk_initMsg(p, TAG_ResourceConnectAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceDisconnect(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceDisconnect *p = (XL_ResourceDisconnect*)msg;
	sk_initMsg(p, TAG_ResourceDisconnect);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceDisconnectAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceDisconnectAck *p = (XL_ResourceDisconnectAck*)msg;
	sk_initMsg(p, TAG_ResourceDisconnectAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceQuery *p = (XL_ResourceQuery*)msg;
	sk_initMsg(p, TAG_ResourceQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceQueryAck *p = (XL_ResourceQueryAck*)msg;
	sk_initMsg(p, TAG_ResourceQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAConfigure *p = (XL_NGAConfigure*)msg;
	sk_initMsg(p, TAG_NGAConfigure);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAConfigureAck *p = (XL_NGAConfigureAck*)msg;
	sk_initMsg(p, TAG_NGAConfigureAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAConfigureQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAConfigureQuery *p = (XL_NGAConfigureQuery*)msg;
	sk_initMsg(p, TAG_NGAConfigureQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAConfigureQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAConfigureQueryAck *p = (XL_NGAConfigureQueryAck*)msg;
	sk_initMsg(p, TAG_NGAConfigureQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAServiceConfigure(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAServiceConfigure *p = (XL_NGAServiceConfigure*)msg;
	sk_initMsg(p, TAG_NGAServiceConfigure);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAServiceConfigureAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAServiceConfigureAck *p = (XL_NGAServiceConfigureAck*)msg;
	sk_initMsg(p, TAG_NGAServiceConfigureAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAServiceQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAServiceQuery *p = (XL_NGAServiceQuery*)msg;
	sk_initMsg(p, TAG_NGAServiceQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAServiceQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAServiceQueryAck *p = (XL_NGAServiceQueryAck*)msg;
	sk_initMsg(p, TAG_NGAServiceQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAStateQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAStateQuery *p = (XL_NGAStateQuery*)msg;
	sk_initMsg(p, TAG_NGAStateQuery);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAStateQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAStateQueryAck *p = (XL_NGAStateQueryAck*)msg;
	sk_initMsg(p, TAG_NGAStateQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_NGAStateNotify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_NGAStateNotify *p = (XL_NGAStateNotify*)msg;
	sk_initMsg(p, TAG_NGAStateNotify);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceDeleteIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceDeleteIndication *p = (XL_ResourceDeleteIndication*)msg;
	sk_initMsg(p, TAG_ResourceDeleteIndication);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceInfoNotify(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceInfoNotify *p = (XL_ResourceInfoNotify*)msg;
	sk_initMsg(p, TAG_ResourceInfoNotify);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceReleaseRequest(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceReleaseRequest *p = (XL_ResourceReleaseRequest*)msg;
	sk_initMsg(p, TAG_ResourceReleaseRequest);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceReleaseRequestAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceReleaseRequestAck *p = (XL_ResourceReleaseRequestAck*)msg;
	sk_initMsg(p, TAG_ResourceReleaseRequestAck);
	if(!minijson_set_ushort(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_ResourceReleaseIndication(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	XL_ResourceReleaseIndication *p = (XL_ResourceReleaseIndication*)msg;
	sk_initMsg(p, TAG_ResourceReleaseIndication);
	if(!minijson_set_uchar_array(error_buffer, props, count, "AddrInfo", p->AddrInfo)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "DataType", &p->DataType)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SwitchMgrQueryAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SwitchMgrQueryAck *p = (SK_SwitchMgrQueryAck*)msg;
	sk_initMsg(p, TAG_SwitchMgrQueryAck);
	if(!minijson_set_ushort(error_buffer, props, count, "DataSize", &p->DataSize)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "TLVCount", &p->TLVCount)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

int build_SwitchMgrQuery(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_SwitchMgrQuery *p = (SK_SwitchMgrQuery*)msg;
	sk_initMsg(p, TAG_SwitchMgrQuery);
	if(!minijson_set_uchar(error_buffer, props, count, "QueryType", &p->QueryType)) return 0;
	return 1;
}

int build_ReAssignChannelAck(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ReAssignChannelAck *p = (SK_ReAssignChannelAck*)msg;
	sk_initMsg(p, TAG_ReAssignChannelAck);
	if(!minijson_set_int(error_buffer, props, count, "Status", &p->Status)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	return 1;
}

int build_ReAssignChannel(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	SK_ReAssignChannel *p = (SK_ReAssignChannel*)msg;
	sk_initMsg(p, TAG_ReAssignChannel);
	if(!minijson_set_int(error_buffer, props, count, "Target", &p->Target)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "AppGroupTarget", p->AppGroupTarget)) return 0;
	if(!minijson_set_char_array(error_buffer, props, count, "NewChanGroup", p->NewChanGroup)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RFSSeqNum", &p->RFSSeqNum)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "RFSNode", &p->RFSNode)) return 0;
	if(!minijson_set_ushort(error_buffer, props, count, "Span", &p->Span)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "Channel", &p->Channel)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "ResendFlag", &p->ResendFlag)) return 0;
	if(!minijson_set_uchar(error_buffer, props, count, "AddressDataType", &p->AddressDataType)) return 0;
	if(!minijson_set_int(error_buffer, props, count, "RFSSize", &p->RFSSize)) return 0;
	if(!minijson_set_uchar_array(error_buffer, props, count, "Data", p->Data)) return 0;
	return 1;
}

