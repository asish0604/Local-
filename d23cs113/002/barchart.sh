#!/bin/bash
if [ $# -lt 2]; then 
	echo "Usage: $0 <n> <n1> <n2>....<nN>"
	exit 1
fi
n=$1 
if [ $(($# - 1)) -ne $n]; then
