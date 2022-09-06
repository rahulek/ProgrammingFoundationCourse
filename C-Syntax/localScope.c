#include <stdio.h>

void function1(void)
{
    // These two variables are exactly the same
    // as in function2 below.
    // They would NOT conflict because the scope
    // of them are LOCAL.
    // When this function returns, localInt, localChar
    // are "gone"

    int localInt = 100;
    char localChar = 'Z';

    printf("\n--- function 1 ----\n");
    printf("localInt = %d\n", localInt);
    printf("localChar = %c\n", localChar);

    return;
}

void function2(void)
{
    // same named variables as in function1()
    int localInt = -100;
    char localChar = 'A';

    printf("\n--- function 2 ----\n");
    printf("localInt = %d\n", localInt);
    printf("localChar = %c\n", localChar);

    return;
}

int main(void)
{
    // print the local variables with calls to function1 and function2
    function1();
    function2();

    return 0;
}