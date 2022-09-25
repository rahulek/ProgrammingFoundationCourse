#include <stdio.h>

int main(void)
{
    int counter = -10;

    // NOTE: no initializer; no posterior statements
    for (; counter <= 10;)
    {
        printf("Counter is: %d\n", counter);

        if (counter == 10)
        {
            break;
        }
        else
        {
            counter++;
        }
    }
}