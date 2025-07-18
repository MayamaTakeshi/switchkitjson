#!/usr/bin/perl

#It seems to use function eval we cannot 'use strict'
#use strict;
#use warnings;

sub usage {
	print STDERR <<EOF;
This script reads Messages.api.h, skj_parsing.h and skj_building.h and generates a table that permits to resolve parser_func, build_fung and check if a message is an Ack or not.
The result will be output to stdout, so you can redirect to create skj_msgtable.c
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

my @nametable= ('') x 60000;
my @acktable = (0) x 60000;
my @pftable = ('') x 60000;
my @bftable = ('') x 60000;

while(<$input>) {
	if(/^#define TAG_([_a-zA-Z0-9]+) (.*)$/) {
		my $name = $1;
		my $value = $2;
		$value =~ s/TAG/\$TAG/;
		my $s = '$TAG_'. $name . ' = ' . $value;
		#print "$s\n";
		eval($s);
		$s = '$nametable[$TAG_' . $name . '] = ' . '"' . $name. '"';
		#print "$s\n";
		eval($s);
		if($name =~ m/Ack$/) {
			$s = '$acktable[$TAG_' . $name . '] = 1';
			#print "$s\n";
			eval($s);
		}
	}
}
close $input or die $!;


$filepath = "./skj_parsing.h";


open my $input, $filepath or die $!;
while(<$input>) {
	if($_ =~ /int parse_([^(]+)/) {
		my $name = $1;
		$s = '$pftable[$TAG_' . $name . "] = 'parse_" . $name . "'";
		#print "$s\n";
		eval($s);
	}
}
close $input or die $!;


$filepath = "./skj_building.h";

open my $input, $filepath or die $!;
while(<$input>) {
	if($_ =~ /int build_([^(]+)/) {
		my $name = $1;
		$s = '$bftable[$TAG_' . $name . "] = 'build_" . $name . "'";
		#print "$s\n";
		eval($s);
	}
}
close $input or die $!;



print <<EOF;
#include "skj_msgtable.h"

#define MSGTABLE_SIZE 60000

typedef struct {
	char *name;
	int is_msg_ack;
	parse_func pfunc;
	build_func bfunc;
} skj_msg;

static skj_msg _msgtable[MSGTABLE_SIZE];

void fill_msgtable() {
        int i;
        for(i=0 ; i<MSGTABLE_SIZE ; ++i) {
                _msgtable[i].name = "";
                _msgtable[i].is_msg_ack = 0;
                _msgtable[i].pfunc = NULL;
                _msgtable[i].bfunc = NULL;
        }
EOF

for (my $i=0 ; $i< 60000 ; ++$i) {
	if($nametable[$i] ne '') {
		print <<EOF;
	_msgtable[$i].name = "$nametable[$i]";
EOF
	}

        if($acktable[$i] == 1) {
                print <<EOF;
        _msgtable[$i].is_msg_ack = 1;
EOF
	}

	if($pftable[$i] ne '') {
                print <<EOF;
        _msgtable[$i].pfunc = $pftable[$i];
EOF
	}

	if($bftable[$i] ne '') {
                print <<EOF;
        _msgtable[$i].bfunc = $bftable[$i];
EOF
	}
}

print <<EOF;
}

const char *get_msg_name(int tag) {
        if(tag >= MSGTABLE_SIZE) return "";

        return _msgtable[tag].name;
}

int is_msg_ack(int tag) {
        if(tag >= MSGTABLE_SIZE) return 0;

        return _msgtable[tag].is_msg_ack;
}

parse_func get_parse_func(int tag) {
        if(tag >= MSGTABLE_SIZE) return NULL;

        return _msgtable[tag].pfunc;
}

build_func get_build_func(int tag) {
        if(tag >= MSGTABLE_SIZE) return NULL;

        return _msgtable[tag].bfunc;
}

EOF

