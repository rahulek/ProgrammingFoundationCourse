#include <stdio.h> //Needed for printf()

int main(void)
{
    char ch = 'A';
    short sh = 4567;
    unsigned int i = 100;
    unsigned long l = 65536;
    float pi = 3.14;

    printf("ch is a character: %c\n", ch);
    printf("sh is a short: %hi\n", sh);
    printf("i is an unsigned int, %i\n", i);
    printf("i is an int printed out in HEX: 0x%x\n", i);
    printf("i is an int printed out in OCTAL: %o\n", i);
    printf("l is an unsigned long: %ld\n", l);
    printf("l as HEX: 0x%lx\n", l);
    printf("pi is a float: %f\n", pi);
    printf("Printing the Percent sign itself: %%\n");

    return 0;
}