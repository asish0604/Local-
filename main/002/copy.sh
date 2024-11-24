#!/bin/bash

if [ $# -ne 2 ]; then
	echo "Usage: copy destinationFile sourceFile"
	exit 1;
fi

destinationFile="$1"
sourceFile="$2"

if [ ! -f "$sourceFile" ]; then 
	echo "Error: Source file '$sourceFile' doesnot exist."
	exit 1
fi

if [ ! -f "$destinationFile" ]; then
        echo "Error: destination file '$destinationFile' doesnot exist."
        exit 1
fi

cp "$sourceFile" "$destinationFile"

if [ $? -ne 0 ]; then
	echo "Error: Failed to copy file."
	exit 1
fi

echo "File copied succcessfully."


