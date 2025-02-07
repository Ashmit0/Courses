#!/opt/homebrew/bin/bash

curdir="$PWD"

for ((i=1;i<=10;i++)); do 
	mkdir -p "$curdir/file$i"
done 

