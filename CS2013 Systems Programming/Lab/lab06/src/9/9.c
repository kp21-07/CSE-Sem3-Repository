#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
	char string [SIZE];
	char* ptr = NULL;
	char* head = NULL;

	//Get a string from user
	scanf("%s", string);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    head = &string[0];
    ptr = &string[strlen(string)-1];
    while(head != ptr || *head != *ptr){
        if(*head != *ptr) {
            printf("Not Palindrome\n");
            return 0;
        }
        head++;
        ptr--;
    }

    printf("Palindrome\n");


	//Do not add/modify anything below this line
	return 0;
}

