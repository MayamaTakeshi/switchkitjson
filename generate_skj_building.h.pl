#!/usr/bin/perl

use strict;
use warnings;

sub usage {
	print STDERR <<EOF;
This script generates skj_building.h based on skj_building.c 
The result will be output to stdout, so you can redirect to create skj_building.h
EOF
}

if($#ARGV >= 0) {
	usage();
	exit 1;
}
my ($filepath) = "./skj_building.c";

open my $input, $filepath or die $!;

print <<EOF;
#ifndef __SKJ_BUILDING_H__
#define __SKJ_BUILDING_H__

#include "minijson.h"
#include "SK_API.h"

EOF

while(<$input>) {
	if($_ =~ /int build_/) {
		s/(.*) {/$1;/;
		print "$_\n";
	}
}

print <<EOF;
#endif
EOF

