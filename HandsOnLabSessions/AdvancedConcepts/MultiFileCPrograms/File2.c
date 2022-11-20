//File2.c - 2nd file in the multi-file C Program.
#include <stdio.h>       //Standard header
#include "MyHeader.h"    //Application's own header file

//Implementation of example2Func
void example2Func(char* msg) {
	//This function is going to write it's own message and then
	//chain it to the example3Func

	printf("*** Inside %s: example2Func : {%s} ***\n", __FILE__, msg);

	//chain to example3Func (implemented in File3.c)
	example3Func(msg);

	//done
	return;
}