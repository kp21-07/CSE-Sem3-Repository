#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//TODO: Add appropriate headers for dynamic memory allocation and string ops


#define SIZE 50

//TODO: Define struct Student
struct student {
	char name[50];
	short int age;
	long roll;
	int marks;
};
typedef struct student Student;

//TODO: Complete the function
void print_details(Student *s){
	printf("Name: %s\nAge: %d\nRoll: %ld\nMarks: %d\n", s->name, s->age, s->roll, s->marks);
}

int main()
{
	Student s;

	//Read data 
	scanf("%s", s.name);
	scanf("%hd", &s.age);
	scanf("%ld", &s.roll);
	scanf("%d", &s.marks);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	Student * new = malloc(sizeof(Student));
	strcpy(new->name, s.name);
	new->roll = s.roll + 100000;
	new->age = s.age;
	new->marks = s.marks;

	print_details(new);
	
	
        //TODO DO NOT FORGET TO FREE ANY MEMORY ALLOCATED USING malloc() using
    free(new);

	//Do not add/modify anything below this line
	return 0;
}

