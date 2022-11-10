#include <stdio.h>

int main(void) {
	//Step 1: Declare a simple int array
	int ages[3] = { 18, 45, 87 };

	//Step 2: Set a pointer to the 1st element of the array
	//Because the indexes are relative, we use index 0
	int* pAge = &ages[0];

	printf("Age at index 0 is: %d\n", *pAge); //Deref the pointer

	//Step 3: What happens when we apply arithemtic operator such as +
	//to the pointer.
	//ANSWER : Pointer is incremented/decremented by (units * sizeof(pointer type))
	//e.g
	//If we say: pAge += 1; OR  pAge++,
	//Pointer will be incremented by (1 * sizeof(int)) = 4 bytes
	//If we say: pAge += 2,
	//Pointer will be incremented by (2 * sizeof(int)) = 8 bytes

	pAge++; //simply move to pointer by pointer-type and 1-unit
	printf("Pointed incremented by 1 unit: Age at index 1 is: %d\n", *pAge);

	//Now Decrement by 1 (we will move backward by 4-bytes)
	pAge--;
	printf("Pointer decremented by 1 unit, Age at index 0 is: %d\n", *pAge);

	//Can we go back still? It will going before the 0th index.
	//This is not part of declared ages array but with pointer, you can do
	//anything
	pAge--;
	printf("Pointer decremented by 1 unit, Age at index -1 (INVALID) is: %d\n", *pAge);

	//From here, how can move directly to ages[2] (the last element)
	pAge += 3;  
	printf("Pointerd multipled by 3 units, Age at this index is: %d\n", *pAge);


	//Done
	return 0;
}