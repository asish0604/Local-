#!/bin/bash
echo "Hello Every Nyan"
echo " Here are the files in the current directory"
ls -l

DIRECTORY="path/to/Myscript.sh"
if[-d "$DIRECTORY"] then
	echo "directory exists"
else
	echo "directory does not exist. creating one..."
	mkdir $DIRECTORY
	echo "directory is created"
fi

