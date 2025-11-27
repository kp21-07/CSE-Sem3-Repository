#include <stdio.h>

#define SIZE 10

int main()
{
	unsigned int input;

	/* The hex_str should finally look like "0xPQRS"
	 * where P,Q,R,S are one of {0,..,9,A,..,F}
	 */
	char hex_str [SIZE]; 

	//Get two integers and operation from the user
	scanf("%d", &input);

	//Do not add/modify anything about this line
	//TODO: Complete the code

	unsigned int shift = 15;
	unsigned int hex3 = input & shift; 

	hex_str[0] = '0';
	hex_str[1] = 'x';
	hex_str[6] = '\0';
    
    unsigned int hex2 = (input >> 4) & shift;
    unsigned int hex1 = (input >> 8) & shift;
    unsigned int hex0 = (input >> 12) & shift;

    hex_str[2] = (hex0 > 9) ? ('A' + hex0-10) : (hex0 + '0');
    hex_str[3] = (hex1 > 9) ? ('A' + hex1-10) : (hex1 + '0');
    hex_str[4] = (hex2 > 9) ? ('A' + hex2-10) : (hex2 + '0');
    hex_str[5] = (hex3 > 9) ? ('A' + hex3-10) : (hex3 + '0');
	//Do not add/modify anything below this line
	//Print the answer
	printf("%s\n", hex_str);
	return 0;
}

