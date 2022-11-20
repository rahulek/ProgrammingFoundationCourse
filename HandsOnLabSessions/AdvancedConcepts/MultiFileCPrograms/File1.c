//File1.c - 1st file in the multi-file C Program.
#include <stdio.h>       //Standard header
#include <string.h>      //C-String functions
#include "MyHeader.h"    //Application's own header file


//Implementation of example1Func
void example1Func(char* msg) {
	//This function is going to write it's own message and then
	//chain it to the example2Func

	//__FILE__ is a standard preprocessor macro that the compiler
	//understandard. It automatically replaces it with the name
	//of the file. For example, in this file, __FILE__ will be
	//replaced by "File1.c" which is the name of this file.

	printf("*** Inside %s: example1Func : {%s} ***\n", __FILE__, msg);

	//chain to example2Func (implemented in File2.c)
	example2Func(msg);

	//Done
	return;
}

//A test function which is called from code within File3.c
void testFunc(char* msg) {
	printf("*** Inside %s: testFunc : {%s} ***\n", __FILE__, msg);

	//Done
	return;
}


//The overall main function
//Only 1 function per C Program
//But this C Program contains multiple C files (File1.c/File2.c/File3.c)
//Code within each file is accessible to other code in other files and
//the functions can call each other.
int main(void) {

	//Get the ball rolling..
	//Invoke example1Func (same file: File1.c)
	//  -- it will invoke example2Func (in File2.c)
	//     -- it fill invoke example3Func (in File3.c)
	//        -- it will invoke testFunc(again implemented in this file: File1.c)
	example1Func("Message from the main() function.");


	//Use other items defined in the application header file
	printf("Weeks Per day are: %d\n", NUM_DAYS_PER_WEEK);

	struct RomanEmperor caligula;
	strcpy(caligula.fullName, "Gaius Caesar Germanicus");
	caligula.emperorSeqNum = 4;
	caligula.regnalYearStart = 37;  //37AD
	caligula.regnalYearEnd = 41;    //41AD

	PROMANEMPEROR pEmperor = &caligula;
	printf("The Roman Emperor %s was %dth emperor who reigned between %d and %d\n",
		    pEmperor->fullName,
		    pEmperor->emperorSeqNum,
		    pEmperor->regnalYearStart,
		    pEmperor->regnalYearEnd);


	//Done
	return 0;
}