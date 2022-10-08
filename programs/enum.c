#include <stdio.h>
#include <stdlib.h>

enum menu {
    ALCOHOL = 69,
    BEER,
    TEA,
    COFFEE,
};

int main()
{
    enum menu jarek = ALCOHOL;
    enum menu diana = COFFEE;

    printf("Jarek ordered: %d\n", jarek);
    printf("Diana ordered: %d\n", diana);

    return EXIT_SUCCESS;
}