#!/bin/bash

mv sync.sh ../ 
rm -Rf *
mv ../sync.sh .
cp -r /Users/jodavis/Desktop/42/get_next_line/* .
echo "synchronized!"
