#include <stdio.h>
#include <stdbool.h> //for the bool type

void compareOps(void)
{
    int a = 144;
    int b = 256;

    int c = 0x20;
    int d = 32;

    // Example of a C statement
    // Statement MUST end with a semi-colon (;)
    // RHS is an example of an expression
    // Expression is evaluated and then the result
    // of an evaluation assigned to the LHS.

    // Expressions involving Relational operators result in
    // a boolean value (TRUE/FALSE)
    // If the RHS evaluates to TRUE (or 1) -> LHS is set to TRUE
    // If the RHS evaluates to FALSE (or 0) -> LHS is set to FALSE

    bool aLessThanB = (a < b);     // TRUE
    bool bGreatherThana = (b > a); // TRUE

    bool cEqsD = (c == d);           // TRUE: c is an HEX notation and d is Decimal
    bool dEqsC = (d == c);           // TRUE
    bool dEqsConstant = (d == 0x99); // FALSE
    bool cEqsConstant = (c != 0x20); // FALSE

    // print the results
    printf("a < b? = %d\n", aLessThanB);
    printf("b > a? = %d\n", bGreatherThana);
    printf("c == d? = %d\n", cEqsD);
    printf("d == c? = %d\n", dEqsC);
    printf("d == 0x99? = %d\n", dEqsConstant);
    printf("d == 0x20? = %d\n", cEqsConstant);

    return;
}

int main(void)
{
    compareOps();

    return 0;
}
