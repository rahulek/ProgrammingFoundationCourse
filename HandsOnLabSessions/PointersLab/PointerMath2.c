#include <stdio.h>

int main(void) {
	//Step 1. Declare a char array and initialize it statically.
	char *day = "A long string for the demo purpose.";

	//Step 2. We want a separate pointer variable
	//to point to the same string, declare it and make it
	//point to the string
	char *pStr = &day[0];   //OR pStr = day;

	//Step 3. Print the string using pStr to make sure its what we think it is!
	printf("==================================\n");
	printf("Original string: %s\n", day);
	printf("Strings via pointer: %s\n", pStr);
	printf("==================================\n");

	//Step 4: Now using the pointer, we want to visit every character in the string
	//until we reach the end of it.
	//How do we know where the string ends? - NULL byte.
	while(*pStr != '\0') { 
		printf("%c ", *pStr);   //Write the char and then a space
		//Pointer math:
		//Incrementing the pointer will move it ahead by (1*sizeof(char))
		//That is - ahead by 1 byte OR 1 char in the string
		pStr++;
	}
	printf("\n");
	printf("===============================\n");



	//Exercise: Write a simialr looping code and find out
	//the length of the string given a pointer to some char.


	//Done
	return 0;
}