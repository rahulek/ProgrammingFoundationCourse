#include <stdio.h>
#include <stdlib.h> //malloc/calloc/free


int main(void) {
	//Step 1: A plain int* var pointing nowhere
	int* pArr = NULL;

	//Step 2: Because at this point, pArr is NULL (not pointing anywhere),
	// program can't dereference it. We want it to point it to a memory
	// which is dynamically allocated to store 5 elements and store 10, 20
	// 30, 40, 50 in it.
	pArr = (int*)malloc(20);  //20 bytes needed from heap, 5 ints,4 bytes each

	//Step 3: malloc can fail. It will return NULL if that's the case
	//We simply exit the program
	if (pArr == NULL) {
		fprintf(stderr, "Memory allocation failed..exiting...\n");
		return -1;
	}

	//Step 4: We got the memory. Use it to store 10, 20, 30, 40, 50
	//Then, print it and then because we're done, free it (give it back
	//to the heap)
	int startValue = 10;
	int* pArrCopy = pArr;  //create a pointer copy because we need an original pointer 
	                         //to be passed to free()
	for(int i=0; i<5; i++) {
		*pArrCopy = startValue;

		//increment startValue
		startValue += 10;

		//increment pointer so that it will point to the memory 4 bytea away
		pArrCopy++;
	}

	//Now print all the elements to make sure all is OK
	//No need to use pArrCopy
	//Also, pArr[i] can be used 
	for(int i=0; i<5; i++) {
		printf("Index %d, Value: %d\n", i, pArr[i]);
	}

	//Done with using the dynamic memory, free it.
	//Pass it the original pointer returned by malloc
	free(pArr);


	//Step 5: RUN under LLDB.GDB
	//   Observe - how pArr is NULL
	//             how pArr is set to the ptr (address returned by malloc)
	//             dump pArr and see if its initialized OR not


	//Done
	return 0;
}