#!/usr/bin/perl

use strict;
use warnings;

sub usage {
	print STDERR <<EOF;
This script converts structs present in SwitchKit Messages.api.h into build_ functions for skj_bulding.c
The result will be output to stdout, so you can redirect to create skj_building.c
Usage:  $0 path_to_Messages.api.h
Ex:     $0 /opt/switchkit/8.3/include/Messages.api.h
EOF
}

if($#ARGV+1 != 1) {
	usage();
	exit 1;
}
my ($filepath) = @ARGV;

open my $input, $filepath or die $!;

my $inside_struct = 0;
my $inside_union = 0;
my @arr;
my $category; # SK or XL
my $name; # RFSWithData, RecAnnConnect etc


sub output_InterAppMsg_union21_code {
	print <<EOF;

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
EOF
}



sub output_build_function {
	if($name eq "SwitchMsgStruct" || $name eq "AcknowledgeMessage" || $name eq "GenericMessage") {
		# Skip messages that contain SK or XL prefix but are not actually supposed to be sent as such
		return;	
	}

	if($name eq "AppPopulationQueryAck" || $name eq "RedundantAppPoolMembersQueryAck") {
		# Skip messages that require functions that are not implemented yet:
		#   minijson_set_int_array
		return;
	}

	print <<EOF;
int build_$name(char *error_buffer, property_t props[], int count, MsgStruct *msg) {
	${category}_$name *p = (${category}_$name*)msg;
	sk_initMsg(p, TAG_$name);
EOF
	for my $a (@arr) {
		my $field_type = $$a[0];
		my $field_name = $$a[1];

		if($field_type eq "union" && $name eq "InterAppMsg") {
			output_InterAppMsg_union21_code();
			next;
		}

		my $ampersand = "&";
		if($field_type =~ /_array/) {
			$ampersand = "";
		}
		print <<EOF;
	if(!minijson_set_$field_type(error_buffer, props, count, "$field_name", ${ampersand}p->$field_name)) return 0;
EOF
	}
	print <<EOF;
	return 1;
}

EOF
}

print <<EOF;
#include "skj_building.h"

EOF

while(<$input>) {
	if($inside_union) {
		if(/[\t ]*}/) {
			push(@arr, ["union", ""]);
			$inside_union = 0;
		}	
	} elsif(/[\t ]*union/) {
		$inside_union = 1;
	} elsif($_ =~ / *typedef +struct *{/) {
		$inside_struct = 1;
	} elsif($_ =~ /}/) {
		$inside_struct = 0;
		if($_ =~ /} *(SK|XL)_([_0-9a-zA-Z]+);/) {
			$category = $1;
			$name = $2;	
			output_build_function();
		}
		@arr = ();
	} elsif($inside_struct) {
		if(/[\t ]*(BaseFields|Reserved|reserved|\/\/)/) {
			; #ignore
		} elsif(/[\t ]+UBYTE +([a-zA-Z][_a-zA-Z0-9]*) *\[[0-9]+\]/) {
			push(@arr, ["uchar_array", $1]);
		} elsif(/[\t ]+UBYTE +([a-zA-Z][_a-zA-Z0-9]*)/) {
			push(@arr, ["uchar", $1]);
		} elsif(/[\t ]+(XBYTE|unsigned short) +([a-zA-Z][_a-zA-Z0-9]*) *\[[0-9]+\]/) {
			push(@arr, ["ushort_array", $2]);
		} elsif(/[\t ]+(XBYTE|unsigned short) +([a-zA-Z][_a-zA-Z0-9]*)/) {
			push(@arr, ["ushort", $2]);
		} elsif(/[\t ]+int +([a-zA-Z][_a-zA-Z0-9]*) *\[[0-9]+\]/) {
			push(@arr, ["int_array", $1]);
		} elsif(/[\t ]+int +([a-zA-Z][_a-zA-Z0-9]*)/) {
			push(@arr, ["int", $1]);
		} elsif(/[\t ]+float +([a-zA-Z][_a-zA-Z0-9]*) *\[[0-9]+\]/) {
			push(@arr, ["float_array", $1]);
		} elsif(/[\t ]+float +([a-zA-Z][_a-zA-Z0-9]*)/) {
			push(@arr, ["float", $1]);
		} elsif(/[\t ]+char +([a-zA-Z][_a-zA-Z0-9]*) *\[[0-9]+\]/) {
			push(@arr, ["char_array", $1]);
		} elsif(/[\t ]+char +([a-zA-Z][_a-zA-Z0-9]*)/) {
			push(@arr, ["char", $1]);
		} elsif(/[\t ]+union +/) {
			$inside_union = 1;
		} else {
			print STDERR "Failed on this: $_\n";
			exit 1;
		}
	} else {
		; #ignoring lines outside structs
	}
}


