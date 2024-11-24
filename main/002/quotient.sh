#!/bin/sh

if [ $# -ne 2 ]; then
	echo "Usage: $0 dividend divisor"
	exit 1
fi

dividend=$1
divisor=$2

quotient=$(echo "$1 / $2" |bc)

echo "Quotient: $quotient"

