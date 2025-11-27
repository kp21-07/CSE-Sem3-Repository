/**
 * determinant.c
 *
 * For computating determinant of an nxn integer matrix
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

/**
 * Computes the sign of an entry in determinant computation
 * @param i The index corresponding to row
 * @param j The index corresponding to column
 * @param size Order of the matrix
 * @return The value of the sign
 */

int sign(const int i, const int j, const int size){
	return ((i+j)%2 == 0) ? 1 : -1;
}


/**
 * Computes the determinant of a matrix
 * @param matrix The input matrix
 * @param size Order of the matrix
 * @return The value of the sign
 */

long determinant(int** matrix, int size){

    if(size == 1) return matrix[0][0];

    int result = 0;

    for(int i = 0; i < size; i++) {
        int s = sign(0, i, size);

		int** minor = malloc(sizeof(int*)*(size-1));
		for(int t = 0; t<size-1; t++) minor[t] = malloc(sizeof(int)*(size-1));
        
		int r = 0, c = 0;
		for(int j = 1; j < size; j++) {
            for(int k = 0; k < size; k++) {
                if(k != i) {
			    	minor[r][c] = matrix[j][k];
				    c++;
				}
            }
			r++;
			c = 0;
		}
        
	    result += s*matrix[0][i]*determinant(minor, size-1);
			
		for(int t = 0; t < size-1; t++) free(minor[t]);
		free(minor);
    }

	return result;
}

// Main procedure
int main(){
	
	int size = 0;
	int** matrix = malloc(sizeof(int*)*SIZE);
    for(int i = 0; i < SIZE; i++) matrix[i] = malloc(sizeof(int)*SIZE);
	long det;

	scanf("%d", &size);

	// Read the matrix
	
	for(int i = 0 ; i< size; i++) {
		for(int j = 0; j < size; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	det = determinant(matrix,size);
	printf("%ld", det);
	return 0;
}
