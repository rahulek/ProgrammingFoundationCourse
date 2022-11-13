#include <stdio.h>


//How can you write your own version of strlen()?
//Write a function that takes a char* (pointer to a starting char)
//and return the length of the string.
//
//Solution: Because we know that the C String in (a) array of characters and
//          (b) its NULL terminated, we can devise the following steps to
//          find out how long the string is!
//            - Initialize a local integer count to ZERO
//            - Starting with the character pointed to by the input parameter,
//            - see, if that character is a NULL byte (termination)
//            - If it is, we're done. RETURN the counter
//            - Else, increment the counter (because we found a non-NULL char)
//            - Move the char* ahead, When we do char* increment, it will go ahead
//              by 1-byte. Thus, moving to the next character in the string
//            - Jump Back to (see if a NULL byte) step.
//
// In the function prototype/signature below - 
//    Parameters -
//        pStr -> Input char* which points to the starting of the string
//    Return -
//        int  -> The length of the string
int myStrlen(char* pStr) {
	//Initialize the local length counter
	int lengthCounter = 0;

	//Loop over all the characters in the string until a NULL byte is found
	while(*pStr != '\0') {
		//increment the counter
		lengthCounter++;

		//Move the pointer to the next char
		pStr++;
	}

	//When here, we got a NULL byte and the lengthCounter
	//contains the length we calculated.
	return lengthCounter;
}


//A Utility function to display the test result
//Parameters:
//  char* str -> String under test
//  int   expectedResult -> What as the expected result?
//  int   actualResult -> What was actually returned?
//Return:
//   void (none)
void displayTestResult(char *str, int expectedResult, int actualResult) {
	if (actualResult != expectedResult) {
		fprintf(stderr, "Test1 Failed: str: %s, exepected length: %d, actual: %d\n", 
			           str, expectedResult, actualResult);
	} else {
		fprintf(stdout, "%s: Test Passed.\n", str);
	}

	//Done
	return;
}



//Test your own function
//NOTE:
//  The use of fprintf() calls
//  This is similar to printf() but you can pass standard file handles or your own file handles.
//     stdin  -> standard input (for keyboard)
//     stdout -> standard output (for the display)
//     stderr -> standard error (connected to the display)
//
int main(void) {
	//Step 1: Setup test strings
	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //"Hello"
	char *str2 = "Just Do it!";                     //Static string
	char str3[10] = { '\0' };                       //Empty string: ""
	char *str4 = "";                                //Another empty string, statically init

	//Test your function
	int expectedRet = 5;   //Length of "Hello"
	int actualRet = myStrlen(str1);
	displayTestResult(str1, expectedRet, actualRet);


	expectedRet = 11;   //Length of "Just Do it!"
	actualRet = myStrlen(str2);
	displayTestResult(str2, expectedRet, actualRet);

	expectedRet = 0; //Length of str3 -> an empty string
	actualRet = myStrlen(str3);
	displayTestResult(str3, expectedRet, actualRet);

	expectedRet = 0; //Length of str4 -> an empty string
	actualRet = myStrlen(str4);
	displayTestResult(str4, expectedRet, actualRet);



	//Done
	return 0;

}