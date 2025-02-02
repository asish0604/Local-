#!/bin/sh

if [ $# -ne 2 ]; then
	echo "Usage: $0 dividend divisor"
	exit 1
fi

dividend=$1
divisor=$2

if (( dividend % divisor == 0)); then 
	echo "Yes"
else
	echo "No"
fi 

