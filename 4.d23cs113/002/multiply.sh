#!/bin/bash


if [ $# -ne 2 ]; then 
	echo "Usage: $0 <num1> < num2>"
	exit 1
fi

result=$(echo "$1 * $2" |bc)

#result=$(( $1 * $2))
echo "Result: $result"



