#include <stdio.h>


//Define a new type
//The type can be explained as - 
//   type's name is "ADDERFUNC"
//   It's an alias for a function pointer
//   The function on which this type can be
//   used is -
//     such a function that takes 1 int parameter
//     and return an int value
//
typedef int (*ADDERFUNC)(int);


//Each of the functions below match
//the ADDERFUNC type which needs a 
//function that takes 1 int and returns 
//1 int
//
//That's why, each of these functions can
//be pointed to by the ADDERFUNC type's variable
int oneAdder(int x) {
	return x + 1;
}

int tenAdder(int x) {
	return x + 10;
}

int hundredAdder(int x) {
	return x + 100;
}

int thousandAdder(int x) {
	return  x + 1000;
}


int main(void) {
	//Use new type that we've defined.
	//Because its a function pointer type,
	//the variable can be the name of the function
	ADDERFUNC pOneAdderFunc = oneAdder;

	int input = 10;
	int result = pOneAdderFunc(input);
	printf("1 Adder func: input = %d, result= %d\n", input, result);


	//Another function pointer varible pointing to the function that adds 1000
	ADDERFUNC pThousandAdderFunc = thousandAdder;
	input = -1000;
	result = pThousandAdderFunc(input);
	printf("1000 Adder func: input = %d, result= %d\n", input, result);


	//Create a new type for the structure that stores all the function pointers
	//Here, we've created 2 new types
	//   1. ADDERFUNCS - a struct
	//   2. PADDERFUNC - Pointer to the struct adderFuncs
	typedef struct adderFuncs {
		ADDERFUNC oneAdder;
		ADDERFUNC hundredAdder;
		ADDERFUNC thousandAdder;
	} ADDERFUNCS, 
	  *PADDERFUNCS;

	struct adderFuncs allAdders = { oneAdder, hundredAdder, thousandAdder };
	PADDERFUNCS pAdderFunctions = &allAdders;

	//Invoke each adder through a pointer type
	input = 999;
	result = pAdderFunctions->oneAdder(input);
	printf("1 Adder func: input = %d, result= %d\n", input, result);

	input = 999;
	result = pAdderFunctions->hundredAdder(input);
	printf("100 Adder func: input = %d, result= %d\n", input, result);

	input = 999;
	result = pAdderFunctions->thousandAdder(input);
	printf("1000 Adder func: input = %d, result= %d\n", input, result);


	//Done
	return 0;

}