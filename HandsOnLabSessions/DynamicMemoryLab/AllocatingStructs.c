#include <stdio.h>
#include <stdlib.h> //atoi
#include <string.h> //strcpy/strncpy

struct Person {
	char fname[25];
	char lname[25];
	int  age;
};


//In this program, we want to create "n"
//number of Person structs. "n" is the number
//provided to the program via command line arguments.
//For example: if it's 5, we will create 5 person
//structs, each initialized with random fname, lname
//and age
//
//Because this number is coming into the progra via
//the command line, compiler won't have any idea about
//how many Person structs does the program have. This
//means that this is not a "static" allocation case but
//needs a heap memory (dynamic memory).
//
int main(int argc, char* argv[]) {

	//Step 1: Verify we recevied argc as 2:
	// argv[0] -> Program name
	// argv[1] -> "n" - number of Person structs to create dynamically
	if (argc != 2) {
		fprintf(stderr, "USAGE: AllocatingStructs <num_persons_to_create>.\n");
		return -1;
	}

	//argc check passed.
	//Convert argv[1] to an int
	int numPersonsToCreate = atoi(argv[1]);
	if(numPersonsToCreate == 0) {
		//atoi() could not covert "string" into an "int"
		fprintf(stderr, "specified number %s could not be converted into a number.\n",
			       argv[1]);
		return -2;
	}

	//everything OK.
	//Allocate place for "n" Person structs on heap (ie. using malloc/calloc)

	//Total mem we need is -> sizeof the Person struct * number of such Person structs
	int numTotalBytesToAllocate = numPersonsToCreate * sizeof(struct Person);

	//Note the malloc() call here.
	//malloc returns a (void *) -> Pointer to a void
	//The expectation is that we *cast* the returned pointer into a suitable pointer type
	//Because we want to use this memory to store "n" Persons, we *cast* the
	//returned pointer into a (struct Person*) type.
	struct Person *pPerson = (struct Person*)malloc(numTotalBytesToAllocate);
	if (pPerson == NULL) {
		//malloc failed, we can't proceed.
		//Report an error and return/exit
		fprintf(stderr, "Could not allocate enough memory for %d Persons.\n", numPersonsToCreate);
		return -3;
	}

	//If here, it means that memory was allocated and we can use it
	//to store out information.
	//
	//First make a copy of the pPerson pointer so that the copy can be
	//used for the pointer arithmetic and original pPerson can be used
	//to free the memory once done.
	struct Person *pPersonCopy = pPerson;
	char          fnameBuffer[25];
	char          lnameBuffer[25];
	for(int i=0; i<numPersonsToCreate; i++) {
		//sprintf() is a stdio function to to format
		//a string in memory rather than printing it out
		//with printf() and reading in via scanf()
		sprintf(fnameBuffer, "FirstName_%02d", i+1);
		sprintf(lnameBuffer, "LastName_%02d", i+2);

		//Copy fnames and lnames into the Person structure
		//strncpy() will be better than strcpy -- WHY?
		strcpy(pPersonCopy->fname, fnameBuffer);
		strcpy(pPersonCopy->lname, lnameBuffer);
		//Set the age into the Person structure
		pPersonCopy->age = i + 20;

		//Done with one Person, move to the next one
		//using pointer arithmetic.
		//When we move pPersonCopy by one, it means
		//move in memory by sizeof(Person) because pPersonCopy
		//is Person*
		pPersonCopy++;
	}


	//Iterate over the allocated mem block of Person structures 
	//and print the info we stored there.
	//pPersonCopy needs to be restored because it was incremented
	//in the earlier for loop.
	pPersonCopy = pPerson;
	for(int i=0; i<numPersonsToCreate; i++) {
		printf("\n======= Person %d ========\n", i+1);
		printf("\tfname: %s\n", pPersonCopy->fname);
		printf("\tlname: %s\n", pPersonCopy->lname);
		printf("\tage:   %d\n", pPersonCopy->age);

		//Move to the next Person
		pPersonCopy++;
	}
	printf("\n======= DONE. =========\n\n");


	//Our job done, free the memory block
	free(pPerson);

	//Done
	return 0;
}