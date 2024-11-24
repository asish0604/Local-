#!/bin/bash

gcc cprog.cpp -o cprog

for N in 10 20 30 40 50;
do
	./cprog $N> numbers_$N.txt
done
