#include <stdio.h>
#include <stdlib.h>

/**
 * === Minimum Power Of 2 === 
 *
 * Goals:
 *  - Acquire user input as int
 *  - If input is positive:
 *    > print the smallest power of 2 grater than or equal to the number
 *  - If input is negative:
 *    > do nothing
 *  - Repeat until user enter -1
 */

int main()
{
    int userInput, smallestPow2 = 2;

    do {
    printf("Enter positive number, if you want to exit enter -1\n");
    printf(":> ");
    scanf("%d", &userInput);
    printf("\n");
    if (userInput > 0)
    {
        while (userInput > smallestPow2)
        {
            smallestPow2 *= 2;
        }
        printf("For %d, smallest power of two is %d\n\n", userInput, smallestPow2);
    } 
    } while (userInput != -1);

    printf("You have entered %d, processing exit...", userInput);


    return EXIT_SUCCESS;
}