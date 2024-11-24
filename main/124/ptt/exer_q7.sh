#!/bin/bash
if [ $# -ne 2 ]; then
echo "Usage: $0 from to"
exit 1
fi
from=$1
to=$2
product=1
for (( i=from; i<=to; i++ ))
do
	ifodd=$(( $i % 2 ))
	if [ $ifodd -ne 0 ]; then
	product=$((product * i))
	fi  
done
echo $product

