#include <stdio.h>

unsigned long long mysqrt(unsigned long long n) {
    if(n == 0 || n == 1) return n;

    unsigned long long l = 1;
    unsigned long long h = n;

    unsigned long long res = 1;

    while (l <= h) {
        unsigned long long mid = (l+h) / 2;
        
        if (n == mid*mid) {
            return mid;
        } else if (mid*mid < n) {
            res = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    return res;
}

int main() {
	unsigned long long a=0;
    unsigned long long factor_sum = 1;

	//Read an integer from the user
	scanf("%lld", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    if(a<=1){
        printf("No");
        return 0;
    }

    unsigned long long lim = mysqrt(a);
    unsigned long long other_factor;

    for(unsigned long long i=2; i<=lim; i++){
        if(a%i==0) {
            factor_sum += i;
            other_factor = a / i;
            if (other_factor != i) factor_sum += other_factor;
        }
    }
    if(factor_sum==a) printf("Yes\n");
    else printf("No\n");
	
	//Do not add/modify anything below this line
	return 0;
}

