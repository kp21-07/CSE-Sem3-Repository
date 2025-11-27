#include <stdio.h>
#include <stdlib.h>

// TODO: Implement the binary tree, and the interactive traversal of the tree
/*
           2
         /   \
        7     9
       /     / \
      15    11  13
     /  \
    18  20
*/
struct tree_node {
	int data;
	struct tree_node* left_child;
	struct tree_node* right_child;
	struct tree_node* parent;
};

typedef struct tree_node Tree;

void interactive (Tree* root) {
	char op[2];
	if(root){
		Tree* ptr =root;

		do {
			printf("Enter p to go to the Parent element, l to go to the left child, r to go to the right child or q to quit\n");
		 	if(ptr) {
			printf("ptr is pointing to the element %d\n", ptr->data);
				if(ptr->parent){
					printf("Parent element is %d\n", ptr->parent->data);
				}
				if(ptr->left_child){
					printf("Left Child element is %d\n", ptr->left_child->data);
				}
				if(ptr->right_child){
					printf("Right Child element is %d\n", ptr->right_child->data);
				}	
			} else printf("ptr is NULL. Press q to exit");
			
			scanf("%s", op);

			switch (op[0]){
				case 'p':
					if(ptr) ptr = ptr->parent;
					break;
				case 'l':
					if(ptr) ptr = ptr->left_child;
					break;
				case 'r':
					if(ptr) ptr = ptr->right_child;
					break;
				case 'q':
					printf("Exiting interactive mode\n");
					break;
				default:
					printf("Invalid option. Valid options are p (parent), l (left Child), r (right child), q (quit) \n");
					break;
			}
		} while (op[0] != 'q');
	} else printf("Tree is empty. Exiting ...\n");
	}

void free_tree(Tree* root) {
	if (!root) return;
  free_tree(root->left_child);  // Traverse left subtree
	free_tree(root->right_child);
	free(root);
}

int main() {
	Tree* root = malloc(sizeof(Tree));
	root->data = 2;

	root->left_child = malloc(sizeof(Tree));
	root->left_child->data = 7;

	root->right_child = malloc(sizeof(Tree));
	root->right_child->data = 9;

	root->left_child->left_child = malloc(sizeof(Tree));
	root->left_child->left_child->data = 15;

	root->left_child->left_child->left_child = malloc(sizeof(Tree));
	root->left_child->left_child->left_child->data = 18;

	root->left_child->left_child->right_child = malloc(sizeof(Tree));
	root->left_child->left_child->right_child->data = 20;

	root->right_child->left_child = malloc(sizeof(Tree));
	root->right_child->left_child->data = 11;

	root->right_child->right_child = malloc(sizeof(Tree));
	root->right_child->right_child->data = 13;
	
	interactive(root);

	free_tree(root);
}
