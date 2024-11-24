#!/bin/sh
if [ $# -ne 2 ]; then
	echo "Usage: multiply <num1> <num2>"
	exit 1
fi      
         
         result=$(echo "$1 * $2" |bc)
	echo "Result= $result"

