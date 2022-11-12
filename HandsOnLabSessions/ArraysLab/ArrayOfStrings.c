#include <stdio.h>

int main(void) {
	//Step 1: First, define a bunch of strings
	// All Strings are statically intialized.
	// That way, they get allocated in a "static" memory
	// block by the compiler
	char *str1 = "Julius Caesar ";
	char *str2 = "conqured Gaul ";
	char *str3 = "and became the first Roman Emperor ";
	char *str4 = "only to die 2 years later in 44BC.";



	//Step2 : Now define an array of char* (char pointers).
	// Make each element (char*) to point to the strings defined above.
	//  ------ ----------------------------------------
	// |  0 ----|-----> 'J', 'u', 'l', ..... '\0'     |
	// |  1 ----|-----> 'c', 'o', 'n', 'q', ... '\0'  |
	// |  2 ----|-----> 'a', 'n', 'd', ...... '\0'    |
	// |  3 ----|-----> 'o', 'n', 'l', ....... '\0'   |
	//  ----------------------------------------------
	char *stringArray[4] = {
		str1,
		str2,
		str3,
		str4
	};

	printf("======================\n");

	//Step 3: What happens if select a random legal index in the array?
	printf("3rd element (index 2): %s\n", stringArray[2]);

	printf("\n");

	//Step 4: Visit every array element and print a string pointed to 
	// by that char*
	for(int i=0; i<4; i++) {
		printf("Element %d (index %d): %s\n", i+1, i, stringArray[i]);
	}

	printf("======================\n");


	//Done
	return 0;

}