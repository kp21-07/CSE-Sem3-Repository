#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	int matrix[ROWS][COLS];
	int det;
	//Get an integer from the user
	scanf("%d %d %d %d", &matrix[0][0], &matrix[0][1], &matrix[1][0], &matrix[1][1]);

	//Do not add/modify anything above this line
	//TODO: Complete the code
	det = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];

	double a = matrix[0][0];
	double b = matrix[0][1];
	double c = matrix[1][0];
	double d = matrix[1][1];

	if(det == 0) printf("NOT INVERTIBLE");
	else {
		printf("%.4lf %.4lf\n%.4lf %.4lf", d/det, -b/det, -c/det, a/det);
	}
	
	//Do not add/modify anything below this line
	return 0;
}

