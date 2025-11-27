#include <stdio.h>
#include <stdlib.h>
//TODO: Include appropriate header file for dynamic memory allocation

int main()
{
	long n;

	//Get the number of integers from the user
	scanf("%ld", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	int * array = malloc(sizeof(int)*n)	;
	int * arr = array;
	long i = 0;
	while(i < n) {
		scanf("%d", arr);
		arr++;
		i++;
	}
	arr = array;
	i = 0;
	while(i < n) {
		printf("%d ", *arr);
		arr++;
		i++;
	}
	//TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
	free(array);
	//Do not add/modify anything below this line
	return 0;
}

