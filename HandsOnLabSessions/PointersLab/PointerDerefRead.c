#include <stdio.h>

int main(void) {
	//Step 1: Declare a simple int variable and store 45 in it.
	int x = 45;

	//Step 2: Declare a pointer value that points to x
	//That is - take an address of x and store it into a pointer variable
	//   - If we take an address of an "int" variable, resulting type would be int*
	//   - If we take an address of a "char" variable, resulting type would be char*
	//   - If we take an address of a "float" variable, resulting tyoe woukd float*
	// NOTE:
	//   LHS type must match RHS type
	//   In the followign code -
	//      LHS type : int* (pointer to an integer)
	//      RHS type:  int* (address of an int which results in int*)
	int* pX = &x;

	//Step 3;
	//  - Deref the pointer to read the data
	//  - Here, pX points to X
	//  - Therefore dereferencing it would result in reading from where its points
	//      Means, a read will occur from the location where x is stored (because pX point to X)
	//  - This dereference is a READ operation on the pointer

	//NOTE - 
	//    (1) *pX below means -> dereference pX, read from where it points to and store
	//        the resulting value in the LHS
	//    (2) When you deref an int*, it results in int.
	//        When you deref a char*, it results in char
	//        When you deref a short*, it result in short
	//        and so on
	// In the declaration below, *pX would result in int because we deref an int*
	// LHS type is an int and RHS type is also an int
	// LHS type == RHS type
	int contentsOfX = *pX;  
	printf("contentsOfX = %d\n", contentsOfX);


	//Step 4: Verify - 1
	//  - Make sure that the printf() outputs value = 45

	//Step 4 - Verify - 2
	//Use GDB/LLDB to verify that &x (address of x where 45 is stored) is
	//the same as the value of pX (pX point to X -> pX = &x)
	//Steps -
	//    $gcc -g -o PointerDerefRead PointerDerefReaed.c
	//    $lldb PointerDerRead
	//        - b main
	//        - r
	//        - s (3-4 times to complete the execution of printf)
	//        - print pX     (this and the following must print the same value)
	//        - print &x
	//        - memory read --size 4 --format d --count 4 pX
	//            OR
	//        -- memory read --size 4 --format d --count 4 &x
	



}