#!/bin/bash
echo " please enter a number"
read a
echo " pleas enter second number "
read b
if [ $a -eq $b ]; then
	echo "value of a and b are equal"
else 
	echo "both are unequal"
fi
