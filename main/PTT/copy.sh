#!/bin/bash

copy() {
    if [ $# -ne 2 ]; then
        echo "Usage: copy destination_file source_file"
        return 1
    fi
    dest_file=$1
    src_file=$2
    cp $src_file $dest_file
}
