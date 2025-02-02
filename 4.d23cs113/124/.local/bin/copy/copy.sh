#!/bin/bash
if [ $# -ne 2 ]; then 
	echo "Usage: copy destination_file source_file"
	exit 1
fi
destination_file=$1
source_file=$2
cp "source_file" "destination_file"

if [ $? -eq 0 ]; then
	echo "copied $source_file to $destination_file successfylly"
else
	echo "error!!! unable to copy $source_file to $destination_file"

fi

