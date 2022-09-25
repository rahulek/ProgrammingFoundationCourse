#include <stdio.h>

int main(void)
{
    int counter = -10; // initializer

    // NOTE: no initializer here
    for (; counter <= 10; counter++)
    {
        printf("Counter is %d.\n", counter);
    }

    return 0;
}