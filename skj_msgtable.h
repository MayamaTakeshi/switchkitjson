#ifndef __SKJ_MSGTABLE_H__
#define __SKJ_MSGTABLE_H__

#include "SK_API.h"
#include "minijson.h"

#include "skj_parsing.h"
#include "skj_building.h"

/* signature of parse functions  */
typedef int (*parse_func) (MsgStruct *msg, char *json_buffer, int size, unsigned int context);

/* signature of build functions  */
typedef int (*build_func) (char *error_buffer, property_t props[], int count, MsgStruct *msg);


void fill_msgtable();

const char *get_msg_name(int tag);

int is_msg_ack(int tag);

parse_func get_parse_func(int tag);

build_func get_build_func(int tag);

#endif


