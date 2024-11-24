#!/bin/bash

#define the array
arr=(2 6 8 1 9)

#print the original array
echo "Original array: ${arr[*]}"

#sort the array in ascending order
sorted_arr=($(printf "%s\n" "${arr[@]}"|sort -n))

#print the sorted array
echo "Sorted array in ascending order::${sorted_arr[@]}"

#sort the array in decending order
sorted_arr1=($(printf "%s\n" "${arr[@]}"|sort -rn))

#print the sorted array
echo "Sorted array in decending order:${sorted_arr1[@]}"


