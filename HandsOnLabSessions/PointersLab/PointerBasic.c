#include <stdio.h>

int main(void) {
	//Step 1: Declare an int variable intialized to 10.
	int x = 10;    

	//Step 2:
	//Where is x in memory?
	//Use & (address-of) operator to find that out
	printf("Address of x is: %p\n", &x);

	//Step 3:
	//Use GDB/LLDB to see the location of x in memory
	// These for for Mac LLDB - 
	//   > gcc -g -o PointerBasic PointerBasic.c
	//   > lldb ./PointerBasic
	//      - b main   (break at main)
	//      - r        (run the program that would break at main)
	//      - s        (step)
	//      - memory read --size 4 --format Y --count 16 &x
	//           OR
	//      - memory read --size 4 --format Y --count 16 <actual address of x>

	//Step 4
	//Verify:
	//   Whatever is the address printed on line 10 by the printf()
	//   If you take a memory dump at that address,
	//      - you should value 10. This is what the "x" contains
	//      - 10 would be shown as 0xA or b00001010 (binary)


	//Done
	return 0;
}