#include <stdio.h>

int main()
{
	int a = 0, iters;

	//Get an odd integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    iters = (a+1)/2;
    for(int i = iters; i > 0; i--){
        for(int j = i; j < 2*i; j++){
            printf("%d", j);
        }
        printf("\n");

    }
	//Do not add/modify anything below this line
	return 0;
}

