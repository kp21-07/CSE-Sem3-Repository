#include <stdio.h>

#define SIZE 7

int val(char c) {
    if (c >= '0' && c <= '9') return c-'0';
    else return 10+(c-'A');
}
int main()
{
	char input [SIZE];
	int result;

	//Get two floating point values from the user
	scanf("%s", input);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    for(int i = 2; i < SIZE-1; i++){
        result += val(input[i]);
        if (i == 5) break;
        result = result << 4;
    }
	//Do not add/modify anything below this line
	printf("%d\n", result);
	return 0;
}

