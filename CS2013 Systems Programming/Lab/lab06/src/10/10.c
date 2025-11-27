#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char str1 [SIZE];
	char str2 [SIZE];
	char destination [2*SIZE];

	//Read two strings from the user
	scanf("%s %s", str1, str2);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    char* ptr1 = str1;
    char* ptr2 = str2;
    char* ptrw = destination;
    
    while(*ptr1 != '\0') {
        *ptrw = *ptr1;
        ptrw++;
        ptr1++;
    }
    while(*ptr2 != '\0') {
        *ptrw = *ptr2;
        ptrw++;
        ptr2++;
    }
    *ptrw = '\0';
    printf("%s\n", destination);
	
	//Do not add/modify anything below this line
	return 0;
}

