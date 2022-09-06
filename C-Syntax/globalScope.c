#include <stdio.h>

// This is an integer defined in the Global scope
// and would be available for all the functions within
// this source file (and also other files that this may
// link with!)
int globalVar = 10;

void testFunction1(void)
{
    // increment globalVar by 15
    // this is possible because globalVar is global
    globalVar = globalVar + 15;

    return;
}

void testFunction2(void)
{
    // decrement globalVar by 5
    // this is possible because globalVar is global
    globalVar = globalVar - 5;

    return;
}

int main(void)
{
    // globalVar is accessibly here too
    printf("Start of main(): globalVar = %d\n", globalVar);
    testFunction1();
    testFunction2();
    printf("End of main(): globalVar = %d\n", globalVar);

    return 0;
}