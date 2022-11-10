#include <stdio.h>

int main(void) {
	//Step 1: Declare an int array
	int salaries[3] = { 1000, 2000, 3000 };

	//Step 2:
	//What would happen if you use *invalid* array index?
	//You get a warning from the compiler
	//but compiler does not throw an error and not let you
	//proceed (unless you ask the compiler to treat any warning
	//as an error).
	//You can access it and the wrong value printed out
	printf("4th salary is: %d\n", salaries[3]);

	//Step 3: What is the compiler's view of the array
	//array indexing with 0, 1, 2, etc is for the programmer
	//convenience. What's happening under-the-hood?
	//
	//Verify -
	//  Once the addresses are printed,
	//   1. Check if they are *contiguous* in memory
	//      because arrays are contiguous
	//   2. Each address is 4-bytes apart. This is so
	//      because this is an int-array. Each element is 4 bytes
	printf("--- Address of each element in the array ----\n");
	printf("Index 0: %p\n", &salaries[0]);
	printf("Index 1: %p\n", &salaries[1]);
	printf("Index 2: %p\n", &salaries[2]);

	//Step 4: Can I access the array without index?
	//Sure. You know that the array is stored in memory
	//4-bytes apart. If you take a pointer to the 1st element
	//and increment it, we can move to the next element
	//Pointer Arithmetic:
	//  When you apply arithmetic operations such as +, ++,
	//  -, --, * etc, pointer is advanced or decremented based
	//  on the type of the pointer
	//This allows us to access the array element with just a
	//pointer without indexing
	int *pElement;   
	pElement = &salaries[0];  //Now we've set a pointer at the 1st array index
	printf("Using Pointer, 0th index has: %d\n", *pElement);

	//Increment the pointer
	//Because the pointer is an int*, ++ will move it ahead by
	//the sizeof(int) => 4
	pElement++;    //We're now at index 1
	printf("Using Pointer, 1st index has: %d\n", *pElement);

	//Take the last using a similar method
	pElement++;    //We're now at index 2
	printf("Using Pointer, 1st index has: %d\n", *pElement);

	//What would happen if we continue incrementing?
	//Obviosuly, the pointer does not know anything about array bounds.
	//It will merrily move ahead and read next 4 bytes and print
	//that data that does not really belong to the array.
	pElement++;    //We're now at index 1
	printf("Using Pointer, 1st index has: %d\n", *pElement);

    
	//Done
	return 0;
}