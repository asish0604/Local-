#!/bin/sh

if [ $# -ne 2 ]; then
	echo "Usage: $0 number base"
	exit 1
fi

number=$1
base=$4

if [ $base -eq 2 ]; then 
	echo "Binary representation of $number: $(echo "obase=$2; $1" | bc)"
elif [ $base -eq 16 ]; then
        echo "Hexadecimal representation of $number: $(echo "obase=$2; $1" | bc)"
elif [ $base -eq 8 ]; then
	echo "Octal representation of $number: $(echo "obase=$2; $1" | bc)"
else
        echo "Invalid base. Please specify 2, 8  or 16."
fi

