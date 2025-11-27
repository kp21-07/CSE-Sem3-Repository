for file in files; do
	for i in {0..9}; do
		grep "datalog-$i$i[0-9].log" files.txt >> tempfiles.txt
		grep "datalog-[0-9]$i$i.log" files.txt >> tempfiles.txt
	done
done

for f in $(cat tempfiles.txt); do
	echo -n "" > "output/06/$f"
done
