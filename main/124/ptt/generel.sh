#!/bin/sh
if [ $# lt 1 ]; then
	echo "usage:<num1> <op> <num2>"
	exit1
fi
num1=$1
op=$2
num2=$3

result = $ (echo "$num1 $op $num2"|bc)
echo "result: $result"
