#include <stdio.h>


/**
 * SumDigits is a recursive function takes in a positive number and computes
 * the sum of all its digits till it becomes a single digit number.
 *
 * @arg num An integer
 */ 
int SumDigits(const int num){
	if(num/10 == 0) return num;
	else return num%10 + SumDigits(num/10);
}

int main()
{
	int input, result;

	scanf("%d", &input);
	//Do not add/modify anything about this line
	//TODO: Complete the code
	result = SumDigits(input);
	while(result/10 != 0){
		result = SumDigits(result);
	}
	//Do not add/modify anything below this line
	printf("%d\n", result);
	return 0;
}

