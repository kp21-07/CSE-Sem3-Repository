#include <stdio.h>
#include <stdlib.h>
//TODO: Include appropriate header file for dynamic memory allocation

int main()
{
	int n;
  int product = 1;
	scanf("%d", &n);

	int*** matrix = malloc(sizeof(int**)*n);
	
	for(int i=0; i<n; i++){
		matrix[i] = malloc(sizeof(int*)*n);			
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matrix[i][j] = malloc(sizeof(int)*n);
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				scanf("%d", &matrix[i][j][k]);			
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				product = ((product%101010)*((matrix[i][j][k])%101010))%101010;
			}
		}
	}



	//Do not add/modify anything about this line
	//TODO: Complete the code

  printf("%d\n", product);

	//TODO: DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			free(matrix[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		free(matrix[i]);			
	}

	free(matrix);
	//Do not add/modify anything below this line
	return 0;
}

