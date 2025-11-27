#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// TODO Include appopriate headers for dynamic memory allocation

typedef struct {
	int r;
	int g;
	int b;
} Pixel;

int main(int argc, char** argv){
		FILE *inputFile, *outputFile;
    // char buffer[4096];

    if (argc != 3) {
        return 1; 
		}

    inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
				printf("FAILED TO OPEN INPUT FILE");
        return 1; 
		}

    outputFile = fopen(argv[2], "w");
    if (outputFile == NULL) {
				printf("FAILED TO OPEN OUTPUT FILE");
        fclose(inputFile); 
        return 1; 
		}

		char first_line[3];
    int width, height, max_val;

    if (fscanf(inputFile, "%2s", first_line) != 1) {
				printf("FAILED TO READ FIRST LINE");
				fclose(inputFile);
				fclose(outputFile);
        return 1; 
		}

    first_line[2] = '\0';

		if (fscanf(inputFile, "%d %d %d", &width, &height, &max_val) != 3) {
				printf("FAILED TO READ VALUES");
				fclose(inputFile);
				fclose(outputFile);
        return 1; 
    }

		if(strcmp(first_line, "P3")) {
				printf("FIRST LINE IS INCORRECT");
				fclose(inputFile);
				fclose(outputFile);
				return 1;
		}

		fprintf(outputFile, "%s\n%d %d\n%d\n", first_line, width, height, max_val);

		long total_pixels = (long) width*height;

		Pixel p;

		for (long i = 0; i < total_pixels; i++) {
				if(fscanf(inputFile, "%d %d %d", &p.r, &p.g, &p.b) != 3) {
						printf("INCORRECT PIXELS.");
						fclose(inputFile);
						fclose(outputFile);
						return 1;
				}

				if( p.r < 0 || p.r > max_val ||
						p.g < 0 || p.g > max_val ||
						p.b < 0 || p.b > max_val ) {
						printf("INCORRECT PIXELS.");
						fclose(inputFile);
						fclose(outputFile);
						return 1;
				}

				fprintf(outputFile, "%d %d %d\n", p.r, p.g, p.b);
		}

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


