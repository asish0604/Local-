#!/bin/bash

# Define the dividend and divisor
dividend=$1
divisor=$2

# Check if the divisor is zero
if [ $divisor -eq 0 ]; then
  echo "Error: Division by zero is not allowed"
  exit 1
fi

# Initialize the quotient
quotient=0

# Loop until the dividend is less than the divisor
for ((i=0; i<=$dividend; i+=$divisor)); do
  ((quotient++))
done

# Print the result
echo "The quotient of $dividend divided by $divisor is $quotient"
