#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned long fact = 1;
    unsigned int input;

	scanf("%d", &input);
	// Do not modify anything above this line
	// TODO: Complete the code
	int i = 1;
	while(i<=input){
		fact *= i;
		i++;
		
	}
	if (fact == 0) printf("TOO LARGE TO COMPUTE\n");
	else printf("%ld", fact);
	//Do not add/modify anything below this line
	return 0;
}
