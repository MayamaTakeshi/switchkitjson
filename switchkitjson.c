#include "SK_API.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "switchkitjson.h"

#include "skj_parsing.h"
#include "skj_building.h"
#include "skj_msgtable.h"

#define MAX_PROPERTIES 24

static char _msg_buffer[4096];
static int _msg_buffer_size;

static char _result_buffer[2048];

static MsgStruct _msg_struct;

static int _initialized = 0;

#define SET_RESULT(format, ...) snprintf(_result_buffer, sizeof(_result_buffer), format, __VA_ARGS__)

void skj_closeConnection();
void skj_watchChannelGroup(const char *groupName);
void skj_appGroupRegister(const char *groupName);
void skj_send(property_t *properties, int count, unsigned int context);
void skj_requestChannel(const char *groupName, unsigned int context);


#define INIT_OK "\"_event_\": \"skj_initialize_ok\""
#define INIT_FAILED "\"_event_\": \"skj_initialize_failed\""


/* returns: 1=OK, 0=Failed */
int skj_initialize(char *buf, int *sz, const char *appName, const char *appVersion, const char *appDescription, int instanceId, const char *host, int port)
{
	/* sk_setSilentMode(1); */
    if(_initialized) {
        *sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Already initialized\"}", INIT_FAILED);
		return 0;
    }

	fill_msgtable();

	SK_Connection * conn = sk_createConnection("dummy", instanceId, 0, host, port, host, port);
	//sk_createConnection will always return a valid SK_Connection*, even if if the host doesn't exit. So we have nothing to check here.
	sk_setCurrentConnection(conn);

	//This is important. sk_appDescriptionData must be called after connection is created, otherwise, it will try to connect to local host.
	sk_appDescriptionData((char*)appName, (char*)appName, (char*)appVersion, (char*)appDescription);

	SK_PingLLC pllc;
	sk_initMsg(&pllc, TAG_PingLLC);
	_msg_buffer_size = sizeof(_msg_buffer);
	int ret = sk_packMessage((MsgStruct*)&pllc, _msg_buffer, &_msg_buffer_size);
	if(ret != OK)
	{
		*sz =snprintf(buf, *sz, "{%s, \"Reason\": \"Calling sk_packMessage failed for initial LLC ping\", \"Status\": %i, \"StatusText\": \"%s\"}", INIT_FAILED, ret, sk_statusText(ret));
		return 0;
	}
	ret = sk_sendMessageWithTag(_msg_buffer, _msg_buffer_size, (void*)1234);
	if(ret != OK)
	{
		*sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Calling sk_sendMessageWithTag failed for initial LLC ping\", \"Status\": %i, \"StatusText\": \"%s)\"}", INIT_FAILED, ret, sk_statusText(ret));
		return 0;
	}

	int i = 1000;
	while(i > 0) {
		int ctx;
		sleep(0.5);
		_msg_buffer_size = sizeof(_msg_buffer);
		int ret = sk_rcvMessage(_msg_buffer, &_msg_buffer_size, 0.001, (void**)&ctx);
		MsgStruct msg;
		if(ret == SK_NO_MESSAGE)
		{
			continue;
		}
		if(ret != OK)
		{
			*sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Failed on call to sk_rcvMessage\", \"Status\": %i, \"StatusText\": \"%s\"}", INIT_FAILED, ret, sk_statusText(ret));
			return 0;
		}
		ret = sk_unpackMessage(_msg_buffer, _msg_buffer_size, &msg);
		if(ret != OK)
		{
			*sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Failed on call to sk_unpackMessage\", \"Status\": %i, \"StatusText\": \"%s\"}", INIT_FAILED, ret, sk_statusText(ret));
			return 0;
		}

		SK_MSG_SWITCH(&msg)
		{
		CASE_PingLLCAck(pca) {
			if( instanceId != 0 && sk_getConnectionName() != instanceId ) {
				*sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Cannot use instanceId %u as it is already in use\"}", INIT_FAILED, instanceId);
				return 0;
			}
			_initialized = 1;
			*sz = snprintf(buf, *sz, "{%s}", INIT_OK);	
			return 1;
		}
		CASE_default {
			/* ignore any other messages */
			;
		}
		} SK_END_SWITCH;
		--i;
	}

	*sz = snprintf(buf, *sz, "{%s, \"Reason\": \"Failed to secure initial connection to LLC\"}", INIT_FAILED);
	return 0;
}

void skj_exec(char *buf, int *sz, const char *json_request) {
	//printf("json_request: %s\n", json_request);
    minijson_object_parser parser;
    property_t properties[MAX_PROPERTIES];
    int count = MAX_PROPERTIES;
    str s;
    s.s = (char*)json_request;
    s.len = strlen(json_request);

    property_t *func_p = NULL;

	property_t *p;

    minijson_init_object_parser(&parser, &s);

    if(!minijson_parse_object(&parser, properties, &count)) {
        *sz = snprintf(buf, *sz, "{\"_event_\": \"sk_func_res\", \"Success\": false, \"Reason\": \"Malformed json string. %s\"}", parser.error);
		return;
    }

    if(!minijson_find_property_ignorecase(properties, count, (str)str_init("_sk_func_"), &p)) {
        *sz = snprintf(buf, *sz, "{\"_event_\": \"sk_func_res\", \"Success\": false, \"Reason\": \"No property _sk_func_ found in json string%s\"}", "");
		return;
    }
	char func[256];
	strncpy(func, p->val.s, p->val.len);
	func[p->val.len] = 0;
	//printf("func: >>%s<<\n", func);

    if(!minijson_find_property_ignorecase(properties, count, (str)str_init("context"), &p)) {
        *sz = snprintf(buf, *sz, "{\"_event_\": \"sk_func_res\", \"Success\": false, \"Reason\": \"No property context found in json string%s\"}", "");
		return;
    }
    unsigned int context = minijson_strntoi(p->val.s, p->val.len);

	if(strcasecmp("closeConnection", func) == 0) {
		skj_closeConnection();
		goto FINISH;
	} else if(strcasecmp("watchChannelGroup", func) == 0) {
        p = NULL;
        if(!minijson_find_property_ignorecase(properties, count, (str)str_init("groupName"), &p)) {
       		SET_RESULT("\"Success\": false, \"Reason\": \"No property groupName found in json string%s\"", "");
            goto FINISH;
        }
		char groupName[256];
		strncpy(groupName, p->val.s, p->val.len);
		groupName[p->val.len] = 0;

		skj_watchChannelGroup(groupName);
		goto FINISH;
	} else if(strcasecmp("appGroupRegister", func) == 0) {
        p = NULL;
        if(!minijson_find_property_ignorecase(properties, count, (str)str_init("groupName"), &p)) {
       		SET_RESULT("\"Success\": false, \"Reason\": \"No property groupName found in json string%s\"", "");
            goto FINISH;
        }
		char groupName[256];
		strncpy(groupName, p->val.s, p->val.len);
		groupName[p->val.len] = 0;

		skj_appGroupRegister(groupName);
		goto FINISH;
	} else if(strcasecmp("requestChannel", func) == 0) {
        p = NULL;
        if(!minijson_find_property_ignorecase(properties, count, (str)str_init("groupName"), &p)) {
       		SET_RESULT("\"Success\": false, \"Reason\": \"No property groupName found in json string%s\"", "");
            goto FINISH;
        }
		char groupName[256];
		strncpy(groupName, p->val.s, p->val.len);
		groupName[p->val.len] = 0;

		skj_requestChannel(groupName, context);
		goto FINISH;
	} else if(strcasecmp("sendMsg", func) == 0) {
		skj_send(properties, count, context);
		goto FINISH;
	} else {
		SET_RESULT("\"Success\": false, \"Reason\": \"Unknown func %s\"", func);
		goto FINISH;
	}

FINISH:
	*sz = snprintf(buf, *sz, "{\"_event_\": \"sk_func_res\", \"context\": %i, %s}", context, _result_buffer);
}

void skj_closeConnection() {
	int ret = sk_closeConnection();
	if(ret == OK) {
		SET_RESULT("\"Success\": true%s", "");
	} else {
		SET_RESULT("\"Success\": false, \"Status\": %i, \"StatusText\": %s\"", ret, sk_statusText(ret));	
	}
}

void skj_watchChannelGroup(const char *groupName) {
	int ret = sk_watchChannelGroup((char*)groupName);
	if(ret == OK) {
		SET_RESULT("\"Success\": true%s", "");
	} else {
		SET_RESULT("\"Success\": false, \"Status\": %i, \"%s\"", ret, sk_statusText(ret));	
	}
}

void skj_appGroupRegister(const char *groupName) {
	int ret = sk_appGroupRegister(groupName);
	if(ret == OK) {
		SET_RESULT("\"Success\": true%s", "");
	} else {
		SET_RESULT("\"Success\": false, \"Status\": %i, \"StatusText\": \"%s\"", ret, sk_statusText(ret));	
	}
}

void skj_requestChannel(const char *groupName, unsigned int context) {
	int ret = sk_requestChannel((char*)groupName, (void*)context, NULL);
	if(ret == OK) {
		SET_RESULT("\"Success\": true%s", "");
	} else {
		SET_RESULT("\"Success\": false, \"Status\": %i, \"StatusText\": \"%s\"", ret, sk_statusText(ret));	
	}
}

void skj_send(property_t *properties, int count, unsigned int context) {
	/*
	error_flag = 0;
	minijson_object_parser parser;
	property_t properties[MAX_PROPERTIES];
	int count = MAX_PROPERTIES;
	str s;
	s.s = (char*)json;
	s.len = strlen(json);
	*/

	property_t *tag;

	if(!minijson_find_property_ignorecase(properties, count, (str)str_init("tag"), &tag)) {
		SET_RESULT("\"Success\": false, \"Reason\": \"No property tag found in json string%s\"", "");
		return;
	}

	build_func bfunc = get_build_func(minijson_strntoi(tag->val.s, tag->val.len));
	if(!bfunc) {
		SET_RESULT("\"Success\": false, \"Reason\": \"Message not supported%s\"", "");
		return;
	}

	static char error_buffer[2048];
	if(!bfunc(error_buffer, properties, count, &_msg_struct)) {
		SET_RESULT("\"Success\": false, \"Reason\": \"Message could not be built. %s\"", error_buffer);
		return;
	}

	_msg_buffer_size = sizeof(_msg_buffer);
	int ret = sk_packMessage((MsgStruct*)&_msg_struct, _msg_buffer, &_msg_buffer_size);
	if(ret != OK)
	{
		SET_RESULT("\"Success\": false, \"Reason\": \"Calling sk_packMessage failed\", \"Status\": %i, \"StatusText\": \"%s\"", "");
		return;
	}

	ret = sk_sendMessageWithTag(_msg_buffer, _msg_buffer_size, (void*)context);
	if(ret != OK)
	{
		SET_RESULT("\"Success\": false, \"Reason\": \"Calling sk_sendMessageWithTag failed\", \"Status\": %i, \"StatusText\": \"%s\"", ret, sk_statusText(ret));
		return;
	}
	
	SET_RESULT("\"Success\": true%s", "");
}

void skj_poll(char *json_buffer, int *sz) {
	int n;
    unsigned int context;

	_msg_buffer_size = sizeof(_msg_buffer);
    int ret = sk_rcvMessage(_msg_buffer, &_msg_buffer_size, 0.001, (void**)&context);

	if(ret == SK_NO_MESSAGE) {
		json_buffer[0] = 0;
		return;
	}
    if(ret != OK) {
        SET_RESULT("\"Reason\": \"Calling sk_recvMessage failed\", \"Status\": %i, \"StatusText\": \"%s\"", ret, sk_statusText(ret));
		goto ERROR;
	}

    ret = sk_unpackMessage(_msg_buffer, _msg_buffer_size, &_msg_struct);
    if(ret != OK)
    {
        SET_RESULT("\"Reason\": \"Calling sk_unpackMessage failed\", \"Status\": %i, \"StatusText\": \"%s\"", ret, sk_statusText(ret));
		goto ERROR;			
    }

	if (_msg_struct.Tag == TAG_PingLLCAck ){
		SK_PingLLCAck *pllca = (SK_PingLLCAck*)&_msg_struct;
		*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"context\": %u, \"Status\": %i, \"Propagate\": %i}",  _msg_struct.Tag, context, pllca->Status, pllca->Propagate);
		return;
	} else if (_msg_struct.Tag == TAG_RequestChannelAck) {
		SK_RequestChannelAck *rca = (SK_RequestChannelAck*)&_msg_struct;
		if(rca->SKStatus == OK) {
			*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"context\": %u, \"SKStatus\": %u, \"XLStatus\": %u, \"Span\": %u, \"Channel\": %u}", _msg_struct.Tag, context, rca->SKStatus, rca->XLStatus, rca->Span, rca->Channel);
		} else {
			*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"context\": %u, \"SKStatus\": %u, \"XLStatus\": %u, \"text\": \"%s\"}", _msg_struct.Tag, context, rca->SKStatus, rca->XLStatus, sk_statusText(rca->SKStatus));
		}
		return;
	} else if (is_msg_ack(_msg_struct.Tag) && _msg_struct.Tag != TAG_RouteControlAck && _msg_struct.Tag != TAG_InterAppMsgAck) {
		int status = ((XL_AcknowledgeMessage *)(&_msg_struct))->Status;
		if(status == 0x10 || status == OK) {
			*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"context\": %u, \"status\": %i}",  _msg_struct.Tag, context, status);
		} else {
			*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"context\": %u, \"status\": %i, \"text\": \"%s\"}",  _msg_struct.Tag, context, status, sk_statusText(status));
		}
		return;
	}

	parse_func pfunc = get_parse_func(_msg_struct.Tag);
	if(pfunc) {
		*sz = pfunc(&_msg_struct, json_buffer, *sz, context);
		return;
    }

	/* Unexpected msg. But OK, let's just add its name and leave to the client code to decide if it is important or not */
	if(is_msg_ack(_msg_struct.Tag)) {
		int status = ((XL_AcknowledgeMessage *)(&_msg_struct))->Status;
		*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg_ack\", \"tag\": %u, \"name\": \"%s\", \"Status\": %i}", _msg_struct.Tag, get_msg_name(_msg_struct.Tag), status);
	} else {
		*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"sk_msg\", \"tag\": %u, \"name\": \"%s\"}", _msg_struct.Tag, get_msg_name(_msg_struct.Tag));
	}
	return;


ERROR:
	*sz = snprintf(json_buffer, *sz, "{\"_event_\": \"poll_failure\", %s}", _result_buffer);
}

inline int skj_getLLCSocketDescriptor() { return sk_getLLCSocketDescriptor(); }

