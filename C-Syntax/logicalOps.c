#include <stdio.h>
#include <stdbool.h>

void logicalOps(void)
{
    int age = 45;
    int mathsMarks = 45;
    int programmingMarks1 = 56;

    // see if age is > 60 to see ->  its a senior citizen age if TRUE
    // simple relational > operator
    bool isSeniorCitizen = age > 60;
    printf("Age= %d, isSeniorCitizen?= %d\n", age, isSeniorCitizen);

    // see if age is >=18 *AND* < 60 -> its a middle-age adult if TRUE
    // AND in the condition implies logical AND
    bool isMiddleAgedAdult = (age >= 18 && age < 60);
    printf("Age= %d, isMiddleAged?= %d\n", age, isMiddleAgedAdult);

    // see if age >= 13 *AND* <= 18 -> its a TEEN ager
    // instead of boolean return, we use a if-else construct
    // to execute some code conditionally.
    if (age >= 13 && age <= 18)
    {
        // code executed only if both conditions TRUE
        printf("Age %d is a TEEN's age.\n", age);
    }
    else
    {
        printf("Age %d is NOT a TEENager.\n", age);
    }

    // see if the student can progress
    // Maths marks >= 35 *OR* Programming Marks >= 35
    bool studentPassed = (mathsMarks >= 35 || programmingMarks1 == 35);
    printf("Maths Score= %d, Programming Score=%d, Passed= %d\n",
           mathsMarks, programmingMarks1, studentPassed);
}

int main(void)
{
    logicalOps();

    return 0;
}