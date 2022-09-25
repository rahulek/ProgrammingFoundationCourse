#include <stdio.h>

int main(void)
{
    int flower = 3; // 1- ROSE, 2 - JASMINE, 3 - CHAMOMILE

    switch (flower)
    {
    case 1:
        printf("its a rose.\n");
        break;
    case 2:
        printf("it's a jasmine flower\n");
        break;

    // The default block executes when no matching case is
    // found.
    default:
        printf("Neither Rose nor Jasmine, must be Chamomile");
        break;
    }

    return 0;
}