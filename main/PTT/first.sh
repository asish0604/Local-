#!/bin/bash
DIRECTORY=/Users/student/shellScripting/
if [ -d $Directory];then
	echo "File exists"
else
	echo "File does not exist, creating new..."
	mkdir $Directory
	echo "File created"
fi
