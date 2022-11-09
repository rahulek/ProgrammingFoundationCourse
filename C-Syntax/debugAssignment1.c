#include <stdio.h>

// Find the maximum of 2 numbers
int maxOf(int num1, int num2)
{
    int max;

    if (num1 < num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    return max;
}

int main(void)
{
    int n1 = 10;
    int n2 = -10;

    // FIXME: Debug and fix the program to get the correct result.
    int max = maxOf(10, -10);

    // FIXME: Generates a compiler warning.
    printf("Max of (%d, %d) is %d\n", max);

    int i = 10;
    int j = i++;
    printf("i=%d, j=%d\n", i, j);

    return 0;
}