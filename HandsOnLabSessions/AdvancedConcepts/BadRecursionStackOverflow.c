#include <stdio.h>

/*
   DONT WRITE RECURSION LIKE THIS.
   THIS IS A DEMO OF BAD RECURSIVE CODE.

   Depending upoin the platform you run this program, 
   it will fail/crash with -
       - Segmentation fault( Unix/Mac )
       - Stack Overflow error (Windows)

   WHY DOES IT CRASH?
     - In general, functions use call stack and for
       every call, a call-frame is created on the stack memory
     - In the recursive function, such as this, the function code
       calls itself.
     - If the function DOES NOT have any terminating condition, the
       code would keep calling itself. This infinite calling sequence
       will cause the runtime to create a call-frame for each such
       call
     - Its therefore easy to see that at some point, the call stack 
       will run out of space
     - This causes the program to crash

   SOLUTION:
      - In a recursive code, always put a termination condition that
        will stop the recursion.
      - For example, in the below code, see the goodRecursion function
        to see how the problem with the badRecursion is fixed.
*/
void badRecursion(int startValue) {
	printf("I am starting at: %d\n", startValue);

	badRecursion(startValue+1); //recursive call with a new value
}

void goodRecursion(int startValue) {
	printf("I am starting at: %d\n", startValue);

	//Add a termination condtion - 25000 is just an arbitrary value
	if( startValue == 25000) {
		return;
	} else {
	 goodRecursion(startValue+1); //recursive call with a new value
	}
}


int main(void) {
	/* Uncomment the badRecursion() call to see the program crash */
		//badRecursion(1);

	//The following call will not crash due to infinite recursion
	goodRecursion(1);
}