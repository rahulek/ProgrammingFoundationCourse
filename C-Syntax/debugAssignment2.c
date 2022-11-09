#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    int y = *p;
    printf("y is %d\n", y);
    *p = -10;
    printf("x now is %d\n", x);

    return 0;
}