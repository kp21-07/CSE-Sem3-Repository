//TODO: Include appropriate header files
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// TODO complete the stack.c file by giving definitions of the functions
// declared in stack.h

// Declare variables here
// Stack memory
int stack[SIZE];

// Index of the head of the stack. If the stack is empty, the variable stores
// the value -1
int head = -1;

// TODO: Give function definitions

int stack_head(int *data_ptr) {
	if(head == -1) return 1;
	*data_ptr = stack[head];
	return 0;
}

int push(int data) {
	if(head == SIZE-1) return 1;
	stack[++head] = data;
	return 0;
}

int pop(int* data_ptr) {
	if(head == -1) return 1;
	*data_ptr = stack[head--];
	return 0;
}

// Check stack.h file to see the declaration and what each of the function is
// expected to do




