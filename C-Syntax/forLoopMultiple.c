#include <stdio.h>

int main(void)
{
    int row, col; // NOTE: uninitialized

    for (row = 0, col = 0; // multiple init statements
         row <= 5;         // condition yielding a bool
         row++, col++      // multiple post statements
    )
    {
        printf("Row %d, Col %d\n", row, col);
    }
    printf("-----------------\n");
    for (row = 0; row <= 5; row++)
    {
        for (col = 0; col <= 5; col++)
        {
            printf("Row %d, Col %d\n", row, col);
        }
    }

    return 0;
}