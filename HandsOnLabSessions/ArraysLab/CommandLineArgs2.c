#include <stdio.h>
#include <stdlib.h>    //For atoi()

//SOME Best PRACTICES RELATED TO THE COMMAND LINE ARGS
// Inside the main function -
//   Validate your program's input immediately by validating
//   your argc, argv
// If the command line arguments are valid, proceed. Otherwise,
//  return an error code.
//
// CONVENTION: Return 0 from main to indicate SUCCESS
//             Return various -ve codes to indicates various types of ERRORS
//
// In this example -
//   We *expect* 2 arguments - 
//     the first indicates a string to be printed
//     the second indicates a repeat count - these many times the string will be
//     printed.
//
// USAGE: CommandLineArgs2 hello 4
//      With this command line, program will output the string "hello" 4 times
//
int main(int argc, char* argv[]) {
	//Validate inputs
	//argc MUST be 3 (name of the progranm + string + repeatCount)
	//if we don't get that much, report a USAGE string and return an error -1

	if (argc != 3) {
		printf("USAGE: CommandLineArgs2 stringToPrint repeatCount\n");
		return -1;   //Indicates an error code which means something wrong with number
		             //of arguments
	}

	//argc is 3 which is good
	//but now check if argv[2] - repeatCount is acually a number
	//When its passed-in, its a number but passed-in as string
	//Use atoi() stdlib function  -> See #include <stdlib.h> above
	//
	//This function takes in a string and returns a number if conversion
	//was successful. Else it will return 0
	//
	//For example: atoi("3") will return 3 (int)
	//             atoi("three") will return 0 (fail) 
	//
	//Validate and return errorCode -2 to indicate this error

	int repeatCount = atoi(argv[2]);
	if (repeatCount == 0) {
		//We could not convert
		printf("Please provide a numeric repeatCount argument.\n");
		return -2;
	}

	//All well. We have a string (argv[1]) and repeatCount.
	printf("===== Repeating %s %d times. =======\n", argv[1], repeatCount);
	for(int i=0; i<repeatCount; i++) {
		printf("%s ", argv[1]);
	}
	printf("\n");
	printf("=====================================\n");


	//Done
	//Normal SUCCESS returnCode of 0
	return 0;

}