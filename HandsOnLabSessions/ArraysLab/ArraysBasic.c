#include <stdio.h>

int main(void) {
	//Step 1. Simple int array of 5 elements, only declared
	int yearsOfInterest[5];

	//Step 2. You can initialize array elements separately
	//array elements are accessed with their index position
	//In C, array indices are 0-relative. That is, the starting index is 0
	//and the last index is (size-of-the-array-1)
	//In this example, there are 5 elements in the array.
	//Valid indices are 0...4 
	yearsOfInterest[0] = 1947;
	yearsOfInterest[1] = 1948;
	yearsOfInterest[2] = 1961;
	yearsOfInterest[3] = 1965;
	yearsOfInterest[4] = 1971;

	//Step 3, Simply print each element individually
	printf("------ Array element: individual access ------\n");
	printf("Element 1, index 0 = %d\n", yearsOfInterest[0]);
	printf("Element 2, index 1 = %d\n", yearsOfInterest[1]);
	printf("Element 3, index 2 = %d\n", yearsOfInterest[2]);
	printf("Element 4, index 3 = %d\n", yearsOfInterest[3]);
	printf("Element 5, index 4 = %d\n", yearsOfInterest[4]);

	//Step 4, if you want process each array element, iterating
	//over the array is what you need.
	//You can use for/do..while/while loops to do it.
	printf("------- Iterating over the array with for loop --------\n");
	for(int i=0; i<5; i++) {
		printf("Element %d, index %d = %d\n", i+1, i, yearsOfInterest[i]);
	}

	printf("-------- Observing Array in memory -------\n");
	//Step 5, see the array in memory
	//Where is it located in the memory?
	//Two ways to do it!!
	//    1. Use only the array name
	//    2. Use the pointer to the first array element
	printf("Array is at address %p in memory.\n", yearsOfInterest);
	printf("Array is at address %p in memory.\n", &yearsOfInterest[0]);

	printf("------- Time to open the LLDB/GDB and check out the memory to locate it.\n");
	//For Windows
	//   prompt>gcc -g -o ArraysBasic.exe ArraysBasic.c
	//   prompt>gdb ArrayBasic.exe
	//	
	//For Mac
	//   $>gcc -g -o ArraysBasic ArraysBasic.c
	//   $>lldb ArrayBasic
	//      ..... lldb commands ----
	//Verify:
	//   - All 5 elements in the array with the values
	//   - Address of the 1st element
	//   - Address of each element should be 4 apart because this is an int array
	//     and each int takes 4 bytes


	//Done
	return 0;


}