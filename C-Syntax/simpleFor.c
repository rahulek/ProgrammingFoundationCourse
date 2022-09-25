#include <stdio.h>

int main(void)
{
    // Code that iteratively prints out a message with
    // the current counter value.

    int counter = 0;

    for (counter = -10; counter <= 10; counter++)
    {
        printf("Current counter: %d\n", counter);
    }

    return 0;
}