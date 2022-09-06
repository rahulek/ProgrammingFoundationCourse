#include <stdio.h>

void vars(void)
{
    int validVar; // valid variable name of type int
    // char 1number; //invalid since it begins with a digit
    char x10; // ok as begines with an alphabet
    // int x-y; //invalid becase uses a reserved - operator
    int _debugInfo = 1;   // OK to begin with an underscore but used mainly by the tools
                          // avoid using it in your programs.
    int x_y = 999;        // OK;
    long $xxx = 12345678; // ok but not meaningful in the programming context
    int X10;              // OK even though 'x10' exits. Variables are case-sensitive

    return;
}

int main(void)
{
    vars();

    return 0;
}