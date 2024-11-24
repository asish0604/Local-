#!/bin/bash
folder="shell2"	

if [ -d "folder" ]; then
		echo "directory exist"
	else 
		echo "directory dosent exist!! new directory has to be created"

		mkdir $folder
		echo d
		"directory created"
		
	fi
