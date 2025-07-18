#ifndef __SWITCHKITJSON_H__
#define __SWITCHKITJSON_H__

/*
#define SKJ_ERROR		-54321

#include "minijson.h"
*/

int skj_initialize(char *buf, int *sz, const char *appName, const char *appVersion, const char *appDescription, int instanceId, const char *host, int port);
void skj_exec(char *buf, int *sz, const char *json_request);
void skj_poll(char *json_buffer, int *sz);

void skj_closeConnection();

int skj_getLLCSocketDescriptor();

#endif
