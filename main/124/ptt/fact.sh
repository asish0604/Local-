#!/bin/sh
echo "please enter the number whose faactorial is to be calculated"
read num
i=1
factorial=1
	if [ $num==0 ]; then
		echo "factorial of 0 is 1"

	while [ $i -le $num ]	
do 
	factorial=$((factorial*i ))
	i=$((i+1))
done
echo "the factoril of the given number is $factorial"

