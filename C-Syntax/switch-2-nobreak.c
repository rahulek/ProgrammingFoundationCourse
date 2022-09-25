#include <stdio.h>

int main(void)
{
    int dayOfWeek = 4;

    switch (dayOfWeek)
    {
    case 4:
        printf("Day is the 4th day of the week\n");
        // NOTE: no break

    case 5:
        printf("I am day 5\n");
        break;
    }
}