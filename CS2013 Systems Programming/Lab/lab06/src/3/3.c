#include <stdio.h>

long fib(int a) {
    long fib0 = 0, fib1 = 1, fib2 = fib0+fib1;
    printf("%ld\n%ld\n", fib0, fib1);
    int count = 1;
    while (count <= a) {
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib0 + fib1;
    }
    return fib2;
}

int main()
{
	int a;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code

    
	
	long fib0 = 0, fib1 = 1, fib2 = fib0+fib1;
	if(a==0){
        printf("%ld", fib0);
        return 0;
    }
    printf("%ld\n%ld\n", fib0, fib1);
    while (fib2 <= a) {
        printf("%ld\n", fib2);
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib0 + fib1;
    }
	//Do not add/modify anything below this line
	return 0;
}

