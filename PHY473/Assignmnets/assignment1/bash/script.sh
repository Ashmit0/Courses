#!/opt/homebrew/bin/bash
myvar="$PWD"
for((i=1;i<=3;i++)); do 
	path="$myvar/dir_$i"
	if [ -d"$path" ]; then 
		echo "creating directory : $path" 
		mkdir -p "$path" 
		echo "directory created : $path" 
	else 
		echo "directory alredy exists : $path" 
	fi
	mkdir -p "$path" 
done 

