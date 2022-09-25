#include <stdio.h>

int main(void)
{
    int age = 7;

    // Conditional Logic with if
    if (age > 60)
    {
        printf("Age: %d is a senior citizen.\n", age);
    }
    else if (age >= 18 && age <= 60)
    {
        printf("Age: %d is a non-senior adult.\n", age);
    }
    else
    {
        printf("Age %d is NOT an adult.", age);
    }

    return 0;
}