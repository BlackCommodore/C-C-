#include <stdio.h>
#include <stdlib.h>
/**
 * === Sigma Drawing ===
 *
 * Print this drawing:
 *
 *    xxxxxxxxxx
 *     x
 *      x
 *       x
 *        x
 *         x
 *        x
 *       x
 *      x
 *     x
 *    xxxxxxxxxx
 *
 *
 * Base width: 10
 * Tip width: 5
 * Total height: 11
 *
 */
int main()
{
    int base_width = 10;
    int tip_width = 5;
    int total_height = 11;
    char sign = 'x';
    char blank = ' ';
    for (int i = 0; i < base_width; i++)
    {
        printf("%c", sign);
    }
    printf("\n");

    for (int i = 1; i < tip_width; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", blank);
        }
        printf("x\n");
    }

    for (int i = tip_width; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c", blank);
        }
        printf("x\n");
    }

    for (int i = 0; i < base_width; i++)
    {
        printf("%c", sign);
    }

    return EXIT_SUCCESS;
}