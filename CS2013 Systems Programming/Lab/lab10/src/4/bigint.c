/*
 * Implementation of Big Integer using list in C. For details on implementation
 * of the functions, see the docstring in bigint.h.
 *
 */

//TODO: Add appropriate header files
#include <stdio.h>
#include <stdlib.h>
#include "bigint.h"

// Number stored as a list with each storing 9 digits of the number
// Why 9 ? 9 = 32*log(2)/log(10)
#define POWNINE 1000000000


/*
 * Function to free memory used for a big integer
 */

void free_bigint(Bigint* big_int){
	if(big_int) {
		if(big_int->numbers) {
			if(big_int->numbers->array){
				free(big_int->numbers->array);
			}
			free(big_int->numbers);
		}
		free(big_int);
	}
}

/*
 * Initializes a big integer
 *
 */
void initialize(Bigint* b_ptr){
	if(!b_ptr) return;
	b_ptr->sign = 1;

	List* new_l = malloc(sizeof(List));
	if(!new_l) return;
	else {
		new_l->curr_count = 0;
		new_l->max_count = 0;
		new_l->array = NULL;
		b_ptr->numbers = new_l;
	}
}

/*
 * Check if two big integers are equal or not
 *
 */

int equal(Bigint* a_ptr, Bigint* b_ptr){
	if(!(a_ptr) ||!(b_ptr)) return -1;
	if(a_ptr->sign != b_ptr->sign) return 1;

	int* list1 = a_ptr->numbers->array;
	int* list2 = b_ptr->numbers->array;

	if(a_ptr->numbers->curr_count != b_ptr->numbers->curr_count) return 1;

	int n = a_ptr->numbers->curr_count;
	for(int i = 0; i < n; i++) if(list1[i] != list2[i]) return 1;

	return 0;
}


/*
 * Adds two big integer numbers and returns a pointer to the resulting sum
 *
 */
Bigint* add(Bigint* a_ptr, Bigint* b_ptr){
	if(!(a_ptr) ||!(b_ptr)) return NULL;

	Bigint* result = malloc(sizeof(Bigint));
	initialize(result);
	List* list = result->numbers;

	int* list1 = a_ptr->numbers->array;
	int* list2 = b_ptr->numbers->array;
	int n1 = a_ptr->numbers->curr_count;
	int n2 = b_ptr->numbers->curr_count;

	long long sum = 0;
	long long carry = 0;

	int i = 0;
	while(i<n1 && i<n2) {
		sum = (long long) list1[i] + list2[i] + carry;
		append(list, sum % POWNINE);
		carry = sum/POWNINE;
		i++;
	}

	while(i<n1) {
		sum = (long long) list1[i] + carry;
		append(list, sum % POWNINE);
		carry = sum/POWNINE;
		i++;
	}

	while(i<n2) {
		sum = (long long) list2[i] + carry;
		append(list, sum % POWNINE);
		carry = sum/POWNINE;
		i++;
	}

	if(carry > 0) append(list, carry);

	return result;
}
/*
 * Print a big integer passed as argument
 */

void print(Bigint* num_ptr){
	if(!num_ptr) return;
	int* list = num_ptr->numbers->array;
	int n = num_ptr->numbers->curr_count;

	printf("%d", list[n-1]);
	for(int i = n-2; i >= 0; i--){
		printf("%09d", list[i]);
	}
	printf("\n");
}

/*
 * Read a big integer
 *
 */

int read(Bigint *num){
	if(!num) return 1;
	int val;
	char c;
	do {
		if (scanf("%d%c", &val, &c) != 2) break;
		insert(num->numbers, 0, val);
	} while (c != '\n');
	return 0;
}
