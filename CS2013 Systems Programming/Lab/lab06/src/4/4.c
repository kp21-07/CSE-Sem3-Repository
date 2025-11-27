#include <stdio.h>

int main()
{
	int a=0, octal = 0;

	//Get an integer from the user
	scanf("%d", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    int len = 0;
    char octal_str[16];
    while(a>0) {
        octal_str[len] = (a%8);
        len++;
        a = a/8;
    }
    octal_str[len] = a;
    while(len>=0){
        octal = octal*10 + octal_str[len];
        len--;
    }
	//Do not add/modify anything below this line
	printf("%d\n", octal);
	return 0;
}

