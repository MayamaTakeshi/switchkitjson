#ifndef __SKJ_PARSING_H__
#define __SKJ_PARSING_H__

#include "SK_API.h"

int parse_CallProcessingEvent(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_ChannelReleased(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_ChannelReleasedWithData(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_DS0StatusChange(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_InterAppMsg(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_InterAppMsgAck(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_PPLEventIndication(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_RFSWithData(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_TransferChanMsg(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

int parse_RouteControlAck(MsgStruct *msg, char *json_buffer, int size, unsigned int context);

#endif
