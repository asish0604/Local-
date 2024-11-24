#!/bin/bash

	factorial() {
	num=$1
  	fact=1
	for ((i=1; i <= num; i++)); do
		fact=$((fact * i))
	done
        echo $fact
}
permutaion(){

n=$1
r=$2

if [[ $n -lt $r ]]; then
	echo "n must be greater than or equal to n"
	return 1
fi
n_fact=$(factorial $n)
n_minus_r_fact=$(factorial $((n-r)))
result=$((n_fact / n_minus_r_fact))
echo $result
}
if [ $# -ne 2 ]; then
	echo "Usage: $0 n r"
	exit 1
fi
permutation $1 $2
