#!/bin/bash

mv sync.sh ../ 
rm -Rf *
mv ../sync.sh .
cp -r /Users/jodavis/Desktop/42/printf/* .
echo "synchronized!"
