#include <stdio.h>

int main(void)
{
    int counter = 0;

    for (;;)
    {
        // WHAT WILL HAPPEN HERE??
        printf("Counter is %d\n", counter);
    }

    return 0;
}