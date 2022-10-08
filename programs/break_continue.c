#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int accumulator = 0, input;
    const int ITERATIONS = 10;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter integer (-1 to exit) ");
        scanf("%d", &input);

        if (input == -1)
        {
            break;
        }
        
        accumulator += input;

    }
    printf("\nSumming everything up: %d\n", accumulator);

    return EXIT_SUCCESS;
}