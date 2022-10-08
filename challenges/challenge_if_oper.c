#include <stdio.h>
#include <stdlib.h>

/**
 * === Even Odd ===
 *
 * Goals:
 *  - prompt user to enter a positive integer number
 *  - if number is negative print a warning and exit
 *  - check if number is even or odd and store the result
 *    in a boolean variable using the ternary operator
 *  - print whether the number is even or odd
 *
 */

int main()
{
    int number, even_odd_controller = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("\n");
    if (number < 0)
    {
        printf("Entered number is non positive!");
    }
    else
    {
        if (number % 2 == 0)
        {
            even_odd_controller = 1;
        }
        if (even_odd_controller)
        {
            printf("Number is even\n");
        }
        else
        {
            printf("Number is odd\n");
        }
    }
}