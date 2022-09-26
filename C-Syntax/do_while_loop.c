#include <stdio.h>

int main(void)
{
    int counter;

    counter = 0;
    do
    {
        printf("do..while(): counter= %d\n", counter);
        counter++;
    } while (counter <= 10);

    return 0;
}