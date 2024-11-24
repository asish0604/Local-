#!/bin/bash
echo "please enter a number"
read num
if [ $num -gt 10 ]; then
	echo "the number is greater than 10"
else 
	echo "the no. is less than 10"
fi
