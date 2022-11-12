#include <stdio.h>
#include <string.h> //For strncpy()


int main(void) {
	//Ref to the ending portin of StringCpy.c
	//
	//We copied more bytes into a smaller array of chars
	//This is disastrous because of the memory corruption that occurred.
	//
	//strcpy() copies *indiscriminately* all the bytes from src to dest
	//until it finds a NULL byte in the src.
	//
	//strncpy() on the other hand must be provided a "n" parameter to say
	//how many bytes should be copied. This will safeguard the program
	//from buffer overruns that would be otherwise caused by strcpy.

	//Step 1: Define a source string
	char *str = "123456789ABCDEF";

	//Step 2: Dest buffer: purposely small, say 10 bytes
	char smallBuf[10];

	//Step 3: Now copy with strncpy() and limit the copy operation to
	//the size of the buffer available.
	strncpy(smallBuf, str, 9);  //Keep 10th byte for storing NULL

	//Step 4: See the result
	printf("After strncpy --> %s\n", smallBuf);

	//Done
	return 0;
}