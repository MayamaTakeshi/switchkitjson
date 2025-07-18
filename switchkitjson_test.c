#include <stdio.h>
#include <unistd.h>

#include "SK_API.h"
#include "switchkitjson.h"

static char buf[4096];

int main(int argc, char argv[]) {
	char appName[] = "tester";
	char appVersion[] = "1.0.0";
	char appDescription[] = "the_tester";
	int instanceId = 2012;
	char host[] = "192.168.33.3";
	int port = 1312;

	int sz;

	printf("Initializing\n");
	sz = sizeof(buf);
	int res = skj_initialize(buf, &sz, appName, appVersion, appDescription, instanceId, host, port);
	printf("skj_initialize result=%i\n", res);
	if(!res) {
		printf("%.*s\n", sz, buf);
		return 1;
	}

	printf("socket=%i\n", skj_getLLCSocketDescriptor());
	
	char requestChannel[] = "{\"_function_\": \"RequestChannel\", \"groupName\": \"ISDN1\", \"context\": 10000}";
	printf("%s\n", requestChannel);
	sz = sizeof(buf);
	skj_exec(buf, &sz, requestChannel);
	printf("sz=%i\n", sz);
	printf("len=%i\n", strlen(buf));
	printf("%.*s\n", sz, buf);

	/* sending message Connect (TAG_Connect) */
	char send[] = "{\"_function_\": \"send\", \"tag\": 0, \"context\": 1234, \"spanA\": 3, \"Channela\": 1, \"spanb\": 3, \"CHANNELb\": 2}";
	printf("%s\n", send);
	sz = sizeof(buf);
	skj_exec(buf, &sz, send);
	printf("%.*s\n", sz, buf);

	int i = 1000;
	while(i > 0) {
		//skj_poll(buf, sizeof(buf));
		sz = sizeof(buf);
		skj_poll(buf, &sz);
		if(buf[0]) {
			printf("%.*s\n", sz, buf);
		}
		sleep(0.5);
		--i;
	}

	char closeConnection[] = "{\"_function_\": \"closeConnection\", \"context\": 4321}";
	printf("%s\n", closeConnection);
	sz = sizeof(buf);
	skj_exec(buf, &sz, closeConnection);
	printf("%.*s\n", sz, buf);

	return 0;
}
