#include <stdio.h>

int main(void) {
	//Step 1: Define a String and intialize individual chars
	char fname[5] = {'J', 'O', 'H', 'N', 0};   //place a NULL byte manually
	char lname[4] = {'D', 'O', 'E', 0};        //place a NULL byte manually


	//Step 2: Print the names and locate their location in memory
	printf("fname is %s at %p.\n", fname, &fname[0]);
	printf("lname is %s at %p\n", lname, &lname[0]);

	//Step 3: What can you derive from the addresses printed?
	//Because we didn't statically initialize the string as in -
	//   char *fname = "John"
	//compiler now creates space of the string chars on local stack
	//Now, lname appears first and then fname in memory.
	// Verify this with GDB/LLDB
	//   - Also verify NULL termination in memory. 
	//   - We manually put the NULL byte because we initialized the array element-wise.

	//Step 4: If we modify the 4th byte of lname which is NULL and then printf it,
	//  what will happen?
	//IN this example's case, because fname follows lname in memory and lname's NULL
	// byte has gone, printf("%s"..) will search and print all chars until it finds 
	// a NULL byte. Therefore, we should see lname and fname both printed.

	printf("Before NULL byte modified by *, lname is: %s\n", lname);
	lname[3] = '*';
	printf("After NULL byte modified by *, lname is: %s\n", lname);

	//Step 5: 
	//  Student Exercise
	//   Instead or progrmatically modifying the NULL byte, use GDB/LLDB
	//   to modify it and try your program.


	//Done
	return 0;
}