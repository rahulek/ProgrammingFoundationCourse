#include <stdio.h>

int main(void) {
	//Step 1: First define a new struct type
	struct Person {
		char fname[15];
		char lname[25];
		int  age;
	};


	//Step 2: Create a new Person
	//Declare and literal syntax to initialize the new Person
	struct Person johnDoe = {
		"John",
		"Doe",
		44,
	};

	//Step 3: Field access: struct variable
	//Because johnDoe is a struct, we use a dot (.) notation to 
	//access each field.
	printf("Fname: %s\n", johnDoe.fname);
	printf("Lname: %s\n", johnDoe.lname);
	printf("Age:   %d\n", johnDoe.age);


	//Step 4: Field access: struct pointer variable
	//When you have a struct pointer, use an arrow (->) notation
	//to access each field
	struct Person *pJohnDoe = &johnDoe;
	printf("Fname via pointer: %s\n", pJohnDoe->fname);
	printf("Lname via pointer: %s\n", pJohnDoe->lname);
	printf("Age   via pointer: %d\n", pJohnDoe->age);


	//Done
	return 0;
}