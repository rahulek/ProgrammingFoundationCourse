#include <stdio.h>

int main(void) {
	//Step 1. Define a simple array of 'chars'
	// Char is a 8-bit (1 byte) type
	// Initialize it immediately
	char name[4] = {'J', 'O', 'H', 'N'};


	//Step 2. Print all characters in the name
	//NOTE : This is simply being treated as a bunch/arrat of charatcers
	//       This is NOT a string (it's not NULL terminated)
	printf("----- Printing each char in the name array -----\n");
	for(int i=0; i<4; i++) {
		printf("%c ", name[i]);  //no newline and a space after each char
	}
	printf("\n");


	//Step 3: Where is the array in memory?
	printf("name array is at %p in memory.\n", name);
	printf("name array's 1st element is at %p in memory.\n", &name[0]);


	//Step 4: Run GDB/LLDB and using the array address printed,
	//        take a memory dump and make sure all chars ('J'...) are seen.
	//Refer: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
	//       Note the ASCII codes for 'J', 'O', 'H', 'N' and make sure you
	//       can see them in memory (J = 74, O = 79, H = 72, N = 78). In Hex
	//       these values will be 0x4A, 0x4F, 0x48, 0x4E
	//

	//Step 5:
	//How to modify each array element?
	//Problem - We want to convert 'JOHN' to 'john'
	//Solution -
	//      Get the ASCII codes for 'j', 'o', 'h', 'n'
	//      They are -              106, 111, 104, 110
	//      Comapring with CAPS -    74,  79, 72,   78
	//What's the pattern?
	//      Each smallcase letter is 32 away from his uppercase counterpart
	//Therefore, if we visit each array element and add 32 to it, we will get
	//      the ASCII lowercase for that letter
	printf("-----Now, converting each character to its lowercase (by adding 32)----\n");
	for(int i=0; i<4; i++) {
		name[i] += 32;        //shorthand for name[i] = name[i] + 32;
	}
	printf("----After the conversion....---\n");
	for(int i=0; i<4; i++) {
		printf("%c ", name[i]);
	}
	printf("\n");


	//Step 6: Using GDB/LLDB, repeat step 4
	//The memory now show contain all lowercase letter codes
	// 'J' (0x4A or 74) should now be 'j' (106, 0x6A) and so on.

	//Done
	return 0;
}