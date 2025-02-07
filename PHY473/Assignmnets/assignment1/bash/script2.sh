
#!/opt/homebrew/bin/bash

MainPath="$PWD" 
for((i=1;i<=3;i++)); do 
	path="$MainPath/dir_$i" 
	rm -r "$path" 
done 

