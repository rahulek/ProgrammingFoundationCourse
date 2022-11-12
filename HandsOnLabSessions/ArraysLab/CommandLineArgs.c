#include <stdio.h>

//We've always used main as a function that does not
//take parameters
//But in reality, there are 3 different ways in which it can be written
//
//1. No parameters - int main(void) { ..... }
//2. argc, argv    - int main(int argc, char* argv[]) { .... }
//3. argc, argv, envp - int main(int argc, char *argv[], char* envp[]) {...}

//NOTES -
//  Because main() is an *official* entry point and a mandatory function
// that a C executable program (not a library program) must write, there
// must be a way to pass in input parameters to the program when its run.
//
// For example - where a program that simply prints a hardcoded string 
// "hello world" runs, it only prints this hardcoded string and unless its
// changed and program compiled, it will print the same string over and over
// 
// How do you pass in any parameter to the main() function itself?
// ANS: You can do this using a command line
//
// USAGE: executable_program param1 param2 param3..... <RETURN>
//
// Here, param1, param2, param3 are called the command line arguments
// User can pass-in any number of these argument which are SPACE-separated.
//
// Inside the main function:
//   int   argc   - receives how many arguments are passed-in
//   char* argv[] - parameter recevies all these inputs parameters 
//                - This array's indices will range from 0 to argc - 1
//   char* envp[] - receives all the ENV (environment) settings
//                  and its rarely used


int main(int argc, char* argv[], char* envp[]) {

	printf("=========================\n");	
	//Step 1: Use argc and see how many command line args were provided
	printf("I received %d arguments.\n", argc);

	//Step 2: Loop over all the command line args
	//argv[] array will start from 0...argc-1
	//0th argument is always the name of the program
	for(int i=0; i<argc; i++) {
		printf("Argument %d - %s\n", i, argv[i]);
	}
	printf("==========================\n");

	//Done
	return 0;


}
