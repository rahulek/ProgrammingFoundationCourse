//File3.c - 3rd file in the multi-file C Program.
#include <stdio.h>       //Standard header
#include "MyHeader.h"    //Application's own header file

//Implementation of example3Func
void example3Func(char* msg) {
	//This function is going to write it's own message.
	//But will invoke another test function implemented
	//within File1.c

	printf("*** Inside %s: example3Func : {%s} ***\n", __FILE__, msg);

	//call a function implemented inside File1.c
	testFunc(msg);

	//done
	return;
}