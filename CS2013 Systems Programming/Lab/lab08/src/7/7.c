#include <stdio.h>
#include <stdlib.h>
//TODO: Include appropriate header file for dynamic memory allocation

int main()
{
	long n;
	int max = 0;

	//Get the number of integers from the user
	scanf("%ld", &n);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	int * array = malloc(sizeof(int)*n);
	int * copy = array;
	for (long i = 0; i < n; i++){
		scanf("%d", copy);
		copy++;
	}

	copy = array;
	max = *copy;
	for (long i = 0; i < n; i++){
		if(*copy > max){
			max = *copy;
		}
		copy++;
	}	
        //TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
     free(array);

	
	//Do not add/modify anything below this line
	printf("%d\n", max);
	return 0;
}

