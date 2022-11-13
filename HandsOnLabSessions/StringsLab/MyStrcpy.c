#include <stdio.h>

//How can you write your own version of strcpy()?
//Write a function that 
//    - takes a char* (pointer to a dest string - where to copy)
//    - and takes a char* (pointer to a source string - from where to copy)
//and returns a pointer to the copied string (dest pointer)
//

//Logical Steps to achieve this -
//   - C Strings are (a) array of chars and (b) NULL terminated
//   - Make a copy of the  dest pointer (because we will increment it)
//     and we need to return the it (after the copy is done)
//   - Until a src pointer reaches the NULL byte -
//      - Copy char pointed to by src to the location pointed to by the dest
//   - Finish off the copy by storing a NULL byte at the end of the dest (so that
//     it becomes a proper NULL terminated C String)
//   - Return the copy of the dest pointer (original dest was changed for the copy op.)

// Function:
// Parameters:
//       char* pDest ->  Destination string pointer (copied chars will be placed here)
//       char* pSrc  ->  Source string pointer (chars will be copied from here)
// Return:
//       char* pDest  -> The pointer to the copied string
char* myStrcpy(char* pDest, char* pSrc) {
	//Make a copy of the dest
	char *pDestCopy = pDest;

	//Until a NULL byte is reached in the source, keep copying
	//from src to dest, one char at a time. Every time, increment
	//both the src and dest pointers.
	while (*pSrc != '\0') {
		//Copy
		*pDest = *pSrc;

		//Increment
		pDest++;
		pSrc++;
	}

	//Make sure to place a NULL termination byte at the end of the dest
	*pDest = '\0';

	//Return the dest pointer. Here, we return the saved dest pointer because
	//the passed-in pointer was incremented during the copy operation
	return pDestCopy;
} 



//Test Your own Code
int main(void) {
	//Step 1: Test Setup
	char *pSrcString1 = "Test String 1";
	char destString1[20];  //Litter more size of the array than the size of pSrcString1

	char *pSrcString2 = "0123456789ABCDEF";
	char destString2[17]; //16 chars + 1 NULL byte

	char* pResult = myStrcpy(destString1, pSrcString1);
	printf("Test 1: Source String: %s, Dest String (after copy): %s\n",
		           pSrcString1, destString1);

	pResult = myStrcpy(destString2, pSrcString2);
	printf("Test 2: Source String: %s, Dest String (after copy): %s\n",
		           pSrcString2, destString2);

	//Done
	return 0;

}