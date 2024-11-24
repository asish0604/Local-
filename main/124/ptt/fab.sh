#!/bin/sh
echo "please enter the the $num whose fabonaccai sequence is to be calculated"
read num
first=0
second=1
echo " following is the fabonacci sequence"
echo "$first"
echo "$second"

for (( i=0; i<num; i++))
do
	
	next=$((first+second))
	first=$second
        second=$next
	echo "$next"
	
done
