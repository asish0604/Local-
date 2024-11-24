#!/bin/sh
#checking if a directory exist or not 

directory="folder"

if [-d "$directory"];then
	echo "directory exist"
else 
	echo "directory dose not exit we will have to create a new directory"
	mkdir $directory
	echo "directory created"
fi
