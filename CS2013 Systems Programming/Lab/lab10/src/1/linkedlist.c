#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

//TODO Complete the code by giving the function definitions

void insert(Node** ref_to_head, int num){
  Node* new_head = malloc(sizeof(Node));
  Node * old_head = *ref_to_head;
  new_head->data = num;
  new_head->next = old_head;
  *ref_to_head = new_head;
}

Node* search(Node* head, int num){
  Node * curr = head;
  while(curr){
	  if(curr->data == num) return curr;
	  else curr = curr->next;
  }
  return NULL;
}

int delete(Node** ref_to_head, int num){
  Node * prev = NULL;
  Node * curr = *ref_to_head;
  while(curr!=NULL) {
	  if(curr->data == num) {
		  if(!prev){
		  	*ref_to_head = curr->next;
		  } else {
			  prev->next = curr->next;
		  }
			free(curr);
		  return 1;
	  }
	  prev = curr;
	  curr = curr->next;
  }
  return 0;
}

void reverse(Node** ref_to_head){
	if(!(*ref_to_head) || !((*ref_to_head)->next)) return;
  Node * prev = NULL;
  Node * curr = *ref_to_head;
  Node * temp = NULL;
  while(curr){
	  temp = curr->next;
	  curr->next = prev;
	  prev = curr;
	  curr = temp;
  }
  *ref_to_head = prev;
}

void print(Node* head){
  if(!head) printf("-1");
  while(head) {
	  printf("%d ", head->data);
	  head = head->next;
  }
  printf("\n");
}

void free_list(Node* head) {
	if(!head) return;
	free_list(head->next);
	free(head);
}
