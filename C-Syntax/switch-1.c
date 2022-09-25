#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int weekday = 7;

    switch (weekday)
    {
    case 1:
        printf("It's Monday today.\n");
        break;
    case 2:
        printf("It's Tuesday today.\n");
        break;
    case 3:
        printf("It's Wednesday today.\n");
        break;
    case 4:
        printf("It's Thursday.\n");
        break;
    case 5:
        printf("It's Friday.\n");
        break;
    case 6:
        printf("It's Saturday.\n");
        break;
    case 7:
        printf("It's Sunday.\n");
        break;
    }

    // NOTE: no default case handling
    return 0;
}