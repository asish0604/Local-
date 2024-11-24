#!/bin/bash

#check if the correct number of arguments are provided
if [ $# -ne 2]; then
	echo "Usage: copy destination_file source_file"
	exit 1
fi
destination_file="$1"
source_file="$2"

#check if the source file exists
if [ ! -f "$source_file" ]; then
	echo "Error: Source file $source_file does not exist"
	exit 1
fi

#check if the destination_file already exists
if [ -f "$destination_file" ]; then
	echo "Overwriting $destination_file..."
fi

cp "$source_file" "$destination_file"

