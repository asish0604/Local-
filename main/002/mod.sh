#!/bin/sh

if [ $# -ne 2 ]; then
	echo "Usage: $0 dividend divisor"
	exit 1
fi

dividend=$1
divisor=$2

mod=$(echo "$1 % $2" |bc)

echo "Mod: $mod"

