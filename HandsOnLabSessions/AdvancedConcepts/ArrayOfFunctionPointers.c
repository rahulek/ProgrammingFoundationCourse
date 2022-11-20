#include <stdio.h>

//a new type with typedef.
// Name of the type: PRINTFN
// Its a pointer to a function which
// takes a char* input and returns nothing
// ie. (void)
typedef void (*PRINTFN)(char*);

//Define 3 samples functions
//which would match the PRINTFN type
//  - 1 char* param and void return
//
void printFunc1(char *msg) {
	printf("printFunc1: %s\n", msg);
	return;
}

void printFunc2(char *msg) {
	printf("printFunc2: %s\n", msg);
}

void printFunc3(char *msg) {
	printf("printFunc3: %s\n", msg);
}


int main(void) {
	//Array of 3 function pointers.
	//Because this is an array of 3 PRINTFNs,
	//and the PRINTFN type is a function pointer,
	//we can store name of the printxxxx function
	//there.
	//Each printXXXX function fulfills the PRINTFN
	//type's signtaure requirement - char* input and
	//void return.
	PRINTFN allPrintFuncs[3] = {
		printFunc1,
		printFunc2,
		printFunc3
	};

	//Iterate through the array and invoke the function
	//Each array element's type is PRINTFN. Therefore,
	//we index into the allPrintFunc array and use the index
	//where the pointer-to-the-function is stored and we invoke
	//it.
	char buf[100];
	for(int i=0; i<3; i++) {
		sprintf(buf, "*** function pointer %d.***", i);
		allPrintFuncs[i](buf);
	}


	//Done
	return 0;

}

