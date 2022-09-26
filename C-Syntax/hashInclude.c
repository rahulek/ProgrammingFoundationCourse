#include <stdio.h>
#include "myHeader.h"

int main(void)
{
    // Run the gcc -E to see the preprocessor output
    printf("MONDAY is %d\n", MONDAY);
    printf("Interest rate is %d\n", INTEREST_RATE_PERCENT);
    printf("Default name: %s\n", DEFAULT_NAME);

    return 0;
}