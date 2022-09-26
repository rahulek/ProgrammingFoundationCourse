#include <stdio.h>

int main(void)
{
    int counter; // NOTE: uninitialized

    counter = 10;
    while (counter > 0)
    {
        printf("while loop: counter= %d\n", counter);

        // NOTE: counter must be incremented/decremented before
        // the while condition is checked again.
        // FAILURE mode - cause of bugs
        counter--;
    }

    return 0;
}