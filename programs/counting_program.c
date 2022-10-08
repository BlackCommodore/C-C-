#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 12;
    int bananas = 9;
    int fruits = apples + bananas;

    printf("In the clasroom, there are:\n");
    printf("\t%d apples\n", apples);
    printf("\t%d bananas\n", bananas);
    printf("giving total number of fruits as %d\n", fruits);
    
    return EXIT_SUCCESS;
}