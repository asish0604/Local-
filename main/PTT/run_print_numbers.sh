#!/bin/bash

gcc print_numbers.c -o print_numbers

for ((N=10; N<=20; N++)); do
    ./print_numbers $N > output_$N.txt
done
