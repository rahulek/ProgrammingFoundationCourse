#include <stdio.h>
#include <stdbool.h> // for bool types only.

void booleanType(void)
{
    bool underAge = false; // internally represented as 0
    bool isGeek = true;    // internally represented as 1

    printf("\n----Boolean----\n");
    printf("underAge=%d, isGeek=%d\n", underAge, isGeek);

    return;
}

int main(void)
{
    booleanType();

    return 0;
}