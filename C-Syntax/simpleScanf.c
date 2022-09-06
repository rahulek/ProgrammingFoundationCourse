#include <stdio.h> //for printf() and scanf() calls.

int main(void)
{
    // Get an age from the user
    int age = 0;
    printf("Please enter your age: "); // NOTE - No \n here

    // scanf here means - read an interger(%d) *INTO* age
    //&age -> address of age in memory.
    scanf(" %d", &age);

    // Get user's sex - M/F/T  - Male/Female/Third
    char sex = 'Z'; // Invalid sex
    printf("Enter your Sex(M/F/T): ");
    scanf(" %c", &sex);

    // name is an *array* of 25 chars
    char name[25];
    printf("Enter your name: ");
    scanf(" %s", &name[0]); // provide an address of the first char

    printf("\n-- Following data was entered --\n");
    printf("\t\tName: %s\n", name); // OR also &name[0]
    printf("\t\tAge: %d\n", age);
    printf("\t\tSex: %c\n", sex);
    printf("----------Done--------------------");

    return 0;
}