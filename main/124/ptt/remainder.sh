#!/bin/bash
if [ "$#" -ne 2 ]; then
	echo "Usage: remainder <num> <deno>"
	exit 1
fi
num=$1
deno=$2
if [ "$deno" -eq 0 ]; then
	echo "error!! division by zero is not allowed"
exit 1
fi
let "result = num % deno"
echo "result: $result"
