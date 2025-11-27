/*
 * Demo for realloc by implementing the list from python.
 * For documentation for each function, see list.h
 */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//TODO: Add appropriate header files as needed

/*
 * Helper function to grow a list. 
 */

int grow(List* l){
	// TODO: Complete the function
	if(!(l->array)) {
		l->array = malloc(sizeof(int)*32);
		l->curr_count = 0;
		l->max_count = 32;
	}
	else {
		if(l->curr_count < l->max_count) return 0;
		else if(l->curr_count == l->max_count) {
			int *new_l = realloc(l->array, sizeof(int)*(l->max_count)*2);
			if(!new_l) {
				free(l->array);
				return 1;
			}
			else{
				l->array = new_l;
				l->max_count *= 2;
			}
		}
	}
	return 0;
}

/*
 * Helper function to shrink a list
 *
 */

int shrink(List* l){
	// TODO: Complete the function
	if(l->curr_count > (l->max_count)/2) return 0;
	else if(l->curr_count <= (l->max_count)/2) {
		int *new_l = realloc(l->array, sizeof(int)*(l->max_count)/2);
		if(!new_l) {
			free(l->array);
			return 1;
		}
		else{
			l->array = new_l;
			l->max_count /= 2;
		}
	}
	return 0;
}

/*
 * Update an element at a given location in the list
 *
 */
int update(List* l, int loc, int data)
{
	// TODO: Complete the function
	if(!l || !(l->array)) return 1;
	else if(loc >= l->curr_count) return 1;
	(l->array)[loc] = data;
	return 0;
}

/*
 * Remove an element at a given location in the list
 *
 */
int delete(List* l, int loc)
{
	// TODO: Complete the function
	if(!l || !(l->array)) return 1;
	else if(loc >= l->curr_count) return 1;
	for(int i = loc; i < (l->curr_count)-1; i++) {
		(l->array)[i] = (l->array)[i+1];
	}
	(l->curr_count)--;
	if(l->curr_count == 0) {
		free(l->array);
		l->array = NULL;
		l->max_count = 0;
	}
	if(shrink(l)) return 1;
	return 0;
}

/*
 * Append an element at a given location in the list
 *
 */

int append(List* l, int data){
	// TODO: Complete the function
	if(grow(l)) return 1;
	else (l->array)[(l->curr_count)++] = data;
	return 0;
}

/*
 * Insert an element at a given location in the list
 *
 */

int insert(List* l, int loc, int data){
	// TODO: Complete the function
	if(grow(l)) return 1;
	else {
		for(int i = (l->curr_count)-1; i>=loc; i--) (l->array)[i+1] = (l->array)[i];
		(l->array)[loc] = data;
		(l->curr_count)++;
	}
	return 0;
}

