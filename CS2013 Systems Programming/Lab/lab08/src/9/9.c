#include <stdio.h>
#include <stdlib.h>
//TODO: Include appropriate header file for dynamic memory allocation


int main()
{
	long size = 0;
	char* str = NULL;

	scanf("%ld", &size);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	str = malloc(size);
	char* copy = str;
	scanf("%s", str);
	while(*copy!='\0') copy++;
	copy--;
	while(copy!=str){	
		printf("%c", *copy);
		copy--;
	}
	printf("%c", *copy);
	free(str);
	
        //TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
        // free() 

	//Do not add/modify anything below this line
	return 0;
}

