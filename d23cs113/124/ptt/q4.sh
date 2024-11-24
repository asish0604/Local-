#!/bin/sh
if [ $# -ne 2 }; then
	echo "Usage: multiply <num1> <num2>"
	exit 1
fi
num1=$1
num2=$2
result=$(( $1 * $2 ))
echo "result: $result"
