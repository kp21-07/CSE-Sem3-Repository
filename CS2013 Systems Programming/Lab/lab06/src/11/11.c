#include <stdio.h>

int main()
{
	int value, current;

	//Read an integer from the user
	scanf("%d", &value);

	//Do not add/modify anything about this line
	//TODO: Complete the code
    int start = 0;
    int rowAdd = 1;
    int colAdd = 2;
    int row;

    while (start <= value) {
        current = start;
        row = rowAdd;
        while(current <= value) {
            printf("%d ", current);
            current += row;
            row ++;
        }
        printf("\n");
        rowAdd++;
        start += colAdd;
        colAdd++;
    }
	
	//Do not add/modify anything below this line
	return 0;
}

