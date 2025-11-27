/**
 * Following is a program to sort a set of items.
 * The program uses bubble sort. If you have not seen what a bubble sort is
 * please read the file bubble.c for a sample implementation with explanation.
 *
 * Figure out what is the issue and fix it using GDB */

#include <stdio.h>

struct it {
     char *data;
     int key;
};

typedef struct it item;
 
item array[8] = {
     {"Bharat", 62},
     {"Habib", 60},
     {"Dundo", 105},
     {"Monu", 1},
     {"Nisha", 1},
     {"Anu", 1},
     {"Stephi", 1},
     {"Bittu", 42},
};
  
void sort(item *a, int n);  

int main()
{

    sort(array,8); 
	for (int i = 0; i<8; i++){
		printf("%d\n", array[i].key);
	}
    return(0);
}

void sort(item *a, int n) { 
      int i = 0, j = 0;

      for (i=0; i<n; i++) {
              for (j=0; j<n-1; j++) {
                       if (a[j].key > a[j+1].key) {
                               item t = a[j];
                               a[j] = a[j+1];
                               a[j+1] = t;
                       }
               }
       }
}

