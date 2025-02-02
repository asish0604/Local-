#!/bin/bash

#check if arguments are provided
if [$#-eq 0];then
	echo"Error:No numbers provided"
	exit 1
	fi

#Initialize sum to 0
sum=0

#Iterate over command line arguments
for num in "$@";do

#check if argument is an integer
if ! [[ $num =~^[0-9]+$ ]];then
	echo "Error:non-integer value '$num' provided"
	exit 1
fi

#Add number to sum
 ((sum+=num))
done

#Print the sum
echo "Sum:$sum"


