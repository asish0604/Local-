#!/bin/bash

convert() {
	local decimal=$1
	local base=$2

	case $base in
	2)  # Binary
		echo "Binary: $((2#$decimal))"
		;;
	8)  # Octal
		echo "Octal: $((8#$decimal))"
		;;
	16)  # Hexadecimal
		echo "Hexadecimal: $((16#$decimal))"
		;;
	*)   # Invalid base
		echo "Invalid base.Please use 2,8 or 16"
		;;
	esac
}
convert 12 2
convert 12 8
convert 12 16
