#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n\n", b);
    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);
    printf("A >> 1 = %u\n", a >> 1);
    printf("A << 1 = %u\n", a << 1);
    printf("B >> 1 = %u\n", b >> 1);
    printf("B << 1 = %u\n", b << 1);
    }