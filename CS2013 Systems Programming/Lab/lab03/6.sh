!#/bin/bash

for i in {000..999}; do
	val=$(echo "4.2 * $i" | bc)
	printf "%.3f" "$val" > "output/06/datalog-$i.log"
	echo "write to $i"
done
