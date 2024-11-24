#!/bin/bash
echo "Please enter the temperature in celsius"
read C
F='expr 1.8*{$C}+32'
echo "Temperature in fahrenheit is $F"
