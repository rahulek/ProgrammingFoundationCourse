#include <stdio.h>

void floatingTypes(void)
{
    float pi = 3.1415925;
    float kb = 1e3;
    double d1 = 987654321.123456789;
    double d2 = -12.34e-6;

    printf("\n---Floats and Doubles----\n");
    printf("pi=%f, kb=%f, d1=%f, d2=%f\n", pi, kb, d1, d2);

    return;
}

int main(void)
{
    floatingTypes();

    return 0;
}