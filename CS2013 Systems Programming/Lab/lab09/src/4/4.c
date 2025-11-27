//TODO: Answer question 6 here
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE *file_ptr;
	
		if(argc != 2) {
			printf("Exactly one argument is required");
			return 1;
		}

		char* filename = *(argv + 1);
		
		file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Failed\n");
        return 1;
    }

		char line[256];

    while (fgets(line, sizeof(line), file_ptr)) {
        printf("%s", line);
    }

    fclose(file_ptr);

    return 0;
}
