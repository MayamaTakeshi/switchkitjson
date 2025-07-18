SK_INCLUDE = -I /opt/switchkit/8.3/include 
MINIJSON_INCLUDE = -I ../minijson
MINIJSON_LIBS = -L ../minijson -lminijson 

ifdef COMSPEC 
	SK_LIBS = -L /opt/switchkit/8.3/lib -l SKApi
else 
	SK_LIBS = -L /opt/switchkit/8.3/lib -l skapi -l skcapi -l ACE 
endif

all: static_lib switchkitjson_test

static_lib: minijson switchkitjson.c switchkitjson.h skj_building.c skj_building.h skj_parsing.c skj_parsing.h skj_msgtable.c skj_msgtable.h
	gcc -g -c switchkitjson.c ${SK_INCLUDE} ${MINIJSON_INCLUDE} -o switchkitjson.o
	gcc -g -c skj_building.c ${SK_INCLUDE} ${MINIJSON_INCLUDE} -o skj_building.o
	gcc -g -c skj_parsing.c ${SK_INCLUDE} ${MINIJSON_INCLUDE} -o skj_parsing.o
	gcc -g -c skj_msgtable.c ${SK_INCLUDE} ${MINIJSON_INCLUDE} -o skj_msgtable.o
	ar rcs libswitchkitjson.a switchkitjson.o skj_building.o skj_parsing.o skj_msgtable.o

switchkitjson_test: static_lib switchkitjson_test.c
	gcc -g switchkitjson_test.c ${SK_INCLUDE} ${MINIJSON_INCLUDE} -L. -lswitchkitjson ${SK_LIBS} ${MINIJSON_LIBS} -lm -o switchkitjson_test

minijson:
	make -C ../minijson

clean:
	rm -f *.a *.o switchkitjson_test

code_generation:
	./generate_skj_building.c.pl /opt/switchkit/8.3/include/Messages.api.h > skj_building.c
	./generate_skj_building.h.pl > skj_building.h
	./generate_skj_parsing.h.pl > skj_parsing.h
	./generate_skj_msgtable.c.pl /opt/switchkit/8.3/include/Messages.api.h > skj_msgtable.c

