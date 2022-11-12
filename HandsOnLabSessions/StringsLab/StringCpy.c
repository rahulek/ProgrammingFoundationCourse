#include <stdio.h>
#include <string.h> //For strcpy

int main(void) {
	//Step 1: Define a statically initialized string
	char *str = "I am being copied into another string.";

	//Step 2: Define another string where we copy the above string
	//We are reserving a space to store 10 characters
	//This is a static allocation (ie. size known at the compile time)
	//
	//We can use this array as a string...why?
	// Because -- string is just an array of characers AND
	//            ends with a NULL byte
	//
	//These 50 bytes are in local memory and could contain any junk
	//when declared. If the array contains less space than the str
	//its a *BUG*. We can't write more bytes into the array of less size
	char dest[50];
	

	//Step 3: Use strcpy() to copy
	//strcpy will copy each char (a byte) from str into dest until
	//it finds a NULL byte in the "str". It stops then and puts a NULL
	//byte into the dest's next byte to finish the copy operation

	strcpy(dest, str);   //copy str into dest

	//Step 4. Print "dest"
	printf("After copying: dest is --> %s\n", dest);


	//Now, we will do strcpy() and copy the same string
	//but purposely keep the size of the dest array less than the length
	//of the source string
	//THIS IS BAD CODE AND ONLY FOR THE LEARNING PURPOSE TO SEE
	//WHAT HAPPENS IF WE HAVE LESS SIZE IN MEMORY AND TRY TO PUT IN MORE BYTES.
	//
	//This will corrupt sections of memory and would make program crash or
	//otherwise buggy
	//
	//Uncomment the strcpy() to see the bad effect -> program crashes
	//Run it under LLDB/GDB to see how the memory corruption takes place.
	//
	char smallerBuf[10];
	//strcpy(smallerBuf, str);
	//printf("SmallerBuf ---> %s\n", smallerBuf);



	//Done
	return 0;


}