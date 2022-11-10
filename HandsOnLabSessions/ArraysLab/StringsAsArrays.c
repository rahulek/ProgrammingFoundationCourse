#include <stdio.h>

int main(void) {
	//GENERAL:
	//   C Strings have these 2 characteristics
	//     1. They are arrays of chars (8-bit elements)
	//     2. They are NULL termiated, 0-byte as the last element in the array.


	//Step 1. Define a static C string.
	//Compiler collects such statically intialized strings and puts
	//then together in a separate memory segment.
	//Such strings follow above mentioned 2 characteristics

	char *fname = "John";
	char *lname = "Doe";


	//Step 2. See where these strings are in memory.
	printf("fname is %s and is at %p in memory.\n", fname, &fname[0]);
	printf("lname is %s and is at %p in memory.\n", lname, &lname[0]);

	//Step 3. Now that we have printed the addresses, work with GDB/LLDB
	// and dump the memory to make sure we can locate these strings there.
	// --- Student Exercise ----


	//Step 4. What do you find?
	// In this example, 2 static strings are placed by the compiler
	// in memory right next to each other
	//NOTE:
	//   Make sure to see the NULL termination for each string
	//   Without this NULL terminations, C strings would be just an
	//   array of chars. Only NULL termination makes them strings truly.


	//Done
	return 0;
}