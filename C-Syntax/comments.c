/*
 * File: comments.c
 *
 * This file demonstrates the usage of code comments in a typical
 * C program.
 */

#include <stdio.h> /* for printf/scanf and other functions */

/*
 * Function: simpleAdd
 * Purpose: Adds two input integers and returns the result of the addition
 * Input Parameters:
 *   a: integer, first operand for the addition operation
 *   b: integer, second operand for the addition operation
 * Return Value:
 *   integer, result of the addition opeartion
 *
 */
int simpleAdd(int a, int b)
{
    int c = a + b; // add two input parameters and store the result

    return c; /* return the result */
}

/*
 * The main function
 * Purpose: invoke the addition function and prints the results.
 * Input Parameters:
 *   None
 * Return Value:
 *   Integer, returning 0 to indicate SUCCESS, -1 to failure
 */
int main(void)
{
    int op1 = 10;
    int op2 = 20;

    /* Block comment
        1. Invoke simpleAdd function passing in two operands and accept
           the result.
        2. Print the result by using the printf() C stdlib function.
    */
    int result = simpleAdd(op1, op2);
    printf("Result of adding %d and %d is %d\n", op1, op2, result);

    return 0; // SUCCESS, returning 0.
}