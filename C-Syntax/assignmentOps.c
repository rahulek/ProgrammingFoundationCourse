#include <stdio.h>

void assignmentOps(void)
{
    int x = 10;

    printf("\n Beginning x= %d\n", x);
    x += 10; // x = x + 10 -> 20
    printf("x += 10, Result=%d\n", x);
    x *= 2; // x = x * 2 -> 40
    printf("x *= 2, Result= %d\n", x);
    x /= 10; // x = x / 10 -> 4
    printf("x /= 10, Result= %d\n", x);
    x %= 5;                             // x = x % 5 -> 4
    printf("x %%= 5, Result= %d\n", x); //<---- Note %% to make sure % appears!

    // Bitwise Assignments
    unsigned char allBits = 0xFF; // AllBits are 1
    printf("\n--- Bitwise ---");
    printf("Begin: allBits: 0x%x\n", allBits);

    // Bitwise AND
    allBits &= 0xF0; // allBits = 0xFF & 0xF0 -> 0xF0
    printf("allBits & 0xF0, Result=0x%x\n", allBits);

    // Bitwise OR
    allBits |= 0x0F; // allBits = 0xF0 & 0x0F -> 0xFF
    printf("allBits |= 0x0F, Result=0x%x\n", allBits);

    // Bitwuse XOR
    allBits ^= 0xFF; // allBits = 0xFF XOR 0xFF -> 0x00
    printf("allBits ^= 0xFF, Result=0x%x\n", allBits);

    return;
}

int main(void)
{
    assignmentOps();

    return 0;
}