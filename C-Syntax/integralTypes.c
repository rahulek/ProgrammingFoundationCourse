#include <stdio.h>

void integralTypes()
{
    char c1 = 'A';
    char c2 = 0x41;

    unsigned short s1 = 14567;
    short s2 = -5463;
    short invalidShort = 35432; // Compiler Warning due to overflow

    unsigned int adultAge = 18;
    int errorCode = -3456;
    int invalidInt = 0xF12345678; // Compiler warning due to overflow

    printf("\n----Chars----\n");
    printf("c1=%c, c2=%c \n", c1, c2);

    printf("----Shorts----\n");
    printf("s1=%d, s2=%d, invalidShort=%d\n", s1, s2, invalidShort);

    printf("----Ints----\n");
    printf("adultAge=%d, errorCode=%d, invalidInt=0x%x\n",
           adultAge, errorCode, invalidInt);

    printf("\n");
}

/*
Typically, in C Code:
    return of 0 indicates SUCCESS
    return of -1 or any negative number indicates an ERROR
This is a convention-only, not a rule.
*/
int main(void)
{
    integralTypes();

    return 0; // return SUCCESS.
}