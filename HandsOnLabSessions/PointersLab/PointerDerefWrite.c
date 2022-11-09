#include <stdio.h>

int main(void) {
	//Step 1: Declare a simple int variable
	// On most architectures, it would take 4 bytes in memory
	// You can use sizeof(int) in your program to find out the architecture specific int-size
	int age = 26;

	//Step 2 - Where is age stored in memory?
	//Use ampersand (&) operator to get its address and print it.
	//%p format specifier is for dealing with the pointers
	printf("Age's address in memory: %p\n", &age);

	//Step 2 - Create a pointer variable to point to age.
	// LHS and the RHS of the expression must match
	// pAge is a pointer-to-int -> LHS
	// &age - is taking an address of an int (therefore an int*) -> RHS
	// Therfore, LHS = RHS
	int *pAge = &age;

	//Step 3- You can always modify (write) age directly by setting its new value
	//How would you do it *indirectly* using the pointer (pAge)?
	// For example: Double the age - i.e. multiply the current age by 2
	//What does the expression mean?
	//   LHS: *pAge -> Dereference pAge (note that the Deref is on the LeftSide => Write Operation)
	//   *= -> Multiply and Assign shorthand.
	//   RHS = 2
	// This shorthand is equivalent to *pAge = *pAge * 2
	// In plain word, it mean -> read an int where pAge is pointing to, multiply by 2 and store the result
	// back into the location where pAge is pointing to
	//
	// Because pAge is pointing to an "age", all above will modify the "age" indirectly (through a pointer)
	//
	*pAge *= 2;


	//Step 4 - Read the modified "age" back.
	// You can use direct "age"   OR
	// You get get to it "indirectly" via "pAge"
	printf("Getting age directly: %d\n", age);
	printf("Getting age indirectly: %d\n", *pAge);   


	//Step 5 - Use GDB/LLDB to verify the memory contents
	//  $gcc -g -o PointerDerefWrite PointerDerefWrite.s
	//  $lldb PointerDerefWrite
	//       - b main
	//       - r 
	//       - s 2-3 times until you reach *pAge *=2 statement
	//       - memory read --size=1 --format Y --count 16 &age
	//            OR
	//       - memory-read --size=1 --format Y -- count 16 pAge
	//       - Make sure to see dump showing 0x1a (26 decimal) where age is stored and 
	//         where pAge is pointing
	//       - s (execure the *pAge *= 2 statement)    (26 * 2 = 52)
	//       - memory-read --size=1 --format Y -- count 16 pAge  (same command again)
	//         The memory dump now show show 52 (0x34) at the same location where age is stored
	


	//Done
	return 0;
}