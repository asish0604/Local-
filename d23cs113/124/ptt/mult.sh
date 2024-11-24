#!/bin/sh
if [ $# -ne 2 ]; then
	echo "usage: multiply <num1> <num2>
	exit 1
	result= $(echo "$1" * "$2" |bc)
	echo "result: $result"
	
