#!/bin/bash

isprime() {
	local num=$1
	if[$num -le 1];then
		echo "$num is not a prime number"
	fi
	for((i=2;i*i<=num;i++));do
		if[$((num % i)) -eq 0];then
			echo "$num is not a prime number"
		else
			echo "$num is a prime number"
		done
	}
isprime $1
