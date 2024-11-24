#!/bin/bash

celsius_to_fahrenheit() {
        local celsius=$1
        local fahrenheit

        fahrenheit=$(echo "scale=2; ($celsius * 9/5) + 32" | bc -l)
        echo "$celsius°C is equal to $fahrenheit°F"
}

echo "Enter temperature in Celsius: "
read celsius
celsius_to_fahrenheit $celsius
