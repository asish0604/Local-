#!/bin/bash
echo " Please enter a number"
read n
a=0
b=1
echo "The fibonacci series of $n is"
for (( i=0;i<$n;i++))
do
	c=$((a+b))
	a=$b;
	b=$c;
	echo "$c"
done
