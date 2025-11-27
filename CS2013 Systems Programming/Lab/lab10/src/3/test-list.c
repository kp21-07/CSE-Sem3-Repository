/*
 * Unit testing for the list library
 *
 */

// TODO: Add appropriate header files
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int testAppend(){
	// TODO: Complete the function
	List *l = malloc(sizeof(List));
	l->array = NULL;
	l->curr_count = 0;
	l->max_count = 0;

	int x = 98;
	int ret1 = append(l, x);
	int check1 = !((l->array)[0] == 98);
	x = 9;
	int ret2 = append(l, x);
	int check2 = !((l->array)[1] == 9);
	free(l->array);
	free(l);
	return (ret1 || ret2 || check1 || check2);
}

int testInsert(){
	// TODO: Complete the function
	List *l = malloc(sizeof(List));
	l->array = NULL;
	l->curr_count = 0;
	l->max_count = 0;

	int x = 98;
	int ret1 = append(l, x);
	int check1 = !((l->array)[0] == 98);
	x = 9;
	int ret2 = insert(l, 0, x);
	int check2 = !((l->array)[1] == 98);
	int check3 = !((l->array)[0] == 9);
	free(l->array);
	free(l);
	return (ret1 || ret2 || check1 || check2 || check3);

}

int testDelete(){
	// TODO: Complete the function
	List *l = malloc(sizeof(List));
	l->array = NULL;
	l->curr_count = 0;
	l->max_count = 0;

	int x = 98;
	int ret1 = append(l, x);
	int check1 = !((l->array)[0] == 98);
	x = 9;
	int ret2 = insert(l, 0, x);
	int check2 = !((l->array)[1] == 98);
	int check3 = !((l->array)[0] == 9);
	x = 98;
	int ret3 = append(l, x);
	int check4 = !((l->array)[2] == 98);
	int ret4 = delete(l, 0);
	int check5 = !((l->array)[0] == 98);
	

	free(l->array);
	free(l);
	return (ret1 || ret2 || check1 || check2 || check3 || ret3 || check4 || check5 || ret4);

}

int testUpdate(){
	// TODO: Complete the function
	List *l = malloc(sizeof(List));
	l->array = NULL;
	l->curr_count = 0;
	l->max_count = 0;

	int x = 98;
	int ret1 = append(l, x);
	int check1 = !((l->array)[0] == 98);
	x = 9;
	int ret2 = insert(l, 0, x);
	int check2 = !((l->array)[1] == 98);
	int check3 = !((l->array)[0] == 9);
	x = 98;
	int ret3 = append(l, x);
	int check4 = !((l->array)[2] == 98);
	int ret4 = update(l, 0, 98);
	int check5 = !((l->array)[0] == 98);
	

	free(l->array);
	free(l);
	return (ret1 || ret2 || check1 || check2 || check3 || ret3 || check4 || check5 || ret4);

}

///////////////////////////////////////
// Do not modify the functions below //
//////////////////////////////////////
int test(){
	int result = 1;

	if(testAppend()){
		printf("\tappend() failed\n");
		result = 0;
	}else{
		printf("append() passed\n");
	}

	if(testInsert()){
		printf("\tinsert() failed\n");
		result = 0;
	}else{
		printf("insert() passed\n");
	}

	if(testDelete()){
		printf("\tdelete() failed\n");
		result = 0;
	}else{
		printf("delete() passed\n");
	}

	if(testUpdate()){
		printf("\tupdate() failed\n");
		result = 0;
	}else{
		printf("update() passed\n");
	}

	return result;
}



int main(){

	printf("Running all test cases\n\n");
	if(test()){
		printf("\nAll test cases passed\n");
	}else{
		printf("\nSome test cases did not pass\n");
	}

	return 0;
}
