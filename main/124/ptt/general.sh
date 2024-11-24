#!/bin/sh
if [ $# -lt 1 ]; then
	echo "usage: $ {arg1} {arg2} {arg3}"
	echo "script name : $0"
	exit1
fi

	arg1=$1
	arg2=$2
	arg3=$3
        echo "first  argument: $1"
	echo "second argument: $2"
        echo "third argument : $#"



