#include <stdio.h>

void impOps(void)
{
    char c = 'A';
    short s = 0x2F0;
    int i = 0x12345678;

    // sizeof()
    printf("sizeof(c) = %d\n", sizeof(c));
    printf("sizeof(s) = %d\n", sizeof(s));
    printf("sizeof(i) = %d\n", sizeof(i));

    // Tertiary assignment
    int y = (i == 0x12345678) ? 0x87654321 : -1;

    // Reference and Derefrence
    // Reference -> Get the address location in memory (PEEK)
    // Dereference -> Read/Write to the address in memory (PEEK/POKE)

    int *p = &i; // Take a PEEK at where i is stored in memory
    printf("i is stored in memory at an address: 0x%x\n", p);

    // PEEK the contents of i via p
    // p is pointing to i, therefore it can be READ via p
    int iViaP = *p; // Read 4 bytes at p and store in "iViaP"
    printf("Read 0x%x via p.\n", iViaP);

    // POKE the contents of i via p
    // p is pointing to i, therefore it can WRITE via p
    *p = 0xF0F01234;

    // Now read back again as "i"
    // its the same variable i that is read
    printf("After poking with a pointer, i is 0x%x\n", i);

    return;
}

int main(void)
{
    impOps();

    return 0;
}