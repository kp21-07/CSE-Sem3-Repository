#include <stdio.h>

long gcd(long a, long b) {
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
	long a,b,tmp;

	//Get two integers from the user
	scanf("%ld %ld", &a, &b);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    printf("%ld\n", gcd(a,b));    
	
	//Do not add/modify anything below this line
	return 0;
}

