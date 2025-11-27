#include <stdio.h>

// TODO: Define the struct named complex appropriately
struct complex {
	double x;
	double y;
};

// Avoids the need to type `struct complex` each time
typedef struct complex mycomplex;


mycomplex add(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	mycomplex result;
	result.x = c1.x + c2.x;
	result.y = c1.y + c2.y;
	return result;
}

mycomplex subtract(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	mycomplex result;
	result.x = c1.x - c2.x;
	result.y = c1.y - c2.y;
	return result;
}

mycomplex multiply(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	mycomplex result;
	result.x = c1.x*c2.x - c1.y*c2.y;
	result.y = c1.x*c2.y + c1.y*c2.x;
	return result;
}

mycomplex divide(const mycomplex c1, const mycomplex c2){
	// TODO: Complete the code
	mycomplex result;
	result.x = (c1.x*c2.x + c1.y*c2.y)/(c2.x*c2.x + c2.y*c2.y);
	result.y = (c1.y*c2.x - c1.x*c2.y)/(c2.x*c2.x + c2.y*c2.y);
	return result;
}

void print_complex(const mycomplex c){
	// TODO: Complete the code
	printf("%.4lf+%.4lfj\n", c.x, c.y);
}

int main()
{
	mycomplex x, y, result;

	scanf("%lf %lf %lf %lf", &x.x, &x.y, &y.x, &y.y);

	result = add(x,y);
	printf("Sum: ");
	print_complex(result);

	result = subtract(x,y);
	printf("Difference: ");
	print_complex(result);

	result = multiply(x,y);
	printf("Product: ");
	print_complex(result);

	result = divide(x,y);
	printf("Division: ");
	print_complex(result);

	// END	
	//Do not add/modify anything below this line
	//Print the answer
	return 0;
}

