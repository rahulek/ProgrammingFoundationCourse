#include <stdio.h>
#include <stdlib.h>  //malloc/calloc/free
#include <string.h>  //strlen/strcpy

//Get argc and argv
//Program will look into the command line arguments
//  - for each string specified on command line, it will be copied into a
//    dynamic memory segment
//  - specifying no parameter is fine. In that case, program should display
//    a message that no parameter was specified and it was exiting.

int main(int argc, char* argv[]) {
	//Step 1: See if argc ==1 . If it is, no extra params were sent
	//Display the message and exit OR return
	if(argc == 1) {
		//Only the program name was specified, no parameters were specified
		printf("No parameters were specified, nothing to do..returning");
		return -1;
	}

	//Step 2: For each command line arg, we need memory allocation
	//Therefore, we need to know how long each string is.
	int totalDynamicMemoryNeeded = 0;
	//Start with i = 1 because index 0 has only program name
	for(int i=1; i<argc; i++) {
		printf("Processing argument at index %d: %s\n", i, argv[i]);

		//Add this arg's length to the running total
		//We must add one more because we will need a place for NULL-byte too
		totalDynamicMemoryNeeded += strlen(argv[i]);
		totalDynamicMemoryNeeded++;   //for a NULL byte

		printf("Running total: %d bytes\n", totalDynamicMemoryNeeded);
	}
	printf("---> To store all these args, we will need a mem of %d bytes\n", totalDynamicMemoryNeeded);

	//Allocate the needed memory
	char *pMem = (char*)calloc(totalDynamicMemoryNeeded, sizeof(char));

	//Return/Exit if calloc failed
	if (pMem == NULL) {
		fprintf(stderr, "Memory allocation failed. can't continue...exiting...");
		exit(-2);
	}

	//All OK
	//store each arg into the allocated memory one at a time
	//Create a copy first
	char *pMemCpy = pMem;
	for(int i=1; i<argc; i++) {
		strcpy(pMemCpy, argv[i]);

		//Increment pMemCpy by strlen(arg) + 1(NULL byte)
		pMemCpy += strlen(argv[i]) + 1;
	}


	//All Done.
	//Print all the args now copied into the dynamically allocated block
	//pMemCpy can't be used. it was used for the strcpy() operations and thus
	//changed
	//We can use it again by resetting it
	pMemCpy = pMem;
	for(int i=1; i<argc; i++) {
		printf("Index: %d, Copied arg: %s\n", i, pMemCpy);
		pMemCpy += strlen(pMemCpy) + 1;
	}

	//Done with the dynamic memory, free it
	free(pMem);

	//Done
	return 0;
}