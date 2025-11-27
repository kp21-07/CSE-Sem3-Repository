#include <stdio.h>

int main()
{
	int a = 0, rem;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    if(a==1){
        printf("Power of 3");
        return 0;
    }
    while(a>3) a = a/3;
    if(a==3) printf("Power of 3");
    else printf("Not power of 3");
	
	//Do not add/modify anything below this line
	return 0;
}

