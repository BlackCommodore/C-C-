#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterations = 5;

    do  {
        printf("i: %d\n", iterations--);
    } while (iterations > 0);
    
    
    return EXIT_SUCCESS;
}