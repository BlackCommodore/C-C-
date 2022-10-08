#include <stdio.h>
#include <stdlib.h>

int main()
{

/**
 * === Bit Selector === 
 * 
 * data: 0xABCD
 * 
 * Goal:
 *  - N, M design variables
 *  - make a selector that selects the bits [N:M] included
 *  - print data and result in hexadecimal format, 4 digits wide, zero padding
 *  - check these selection ranges
 *    - [0:3] expected result 0x000D
 *    - [4:7] expected result 0x000C
 *    - [8:11] expected result 0x000B
 *    - [12:15] expected result 0x000A
 * 
 */

unsigned N, M, data = 0xABCD;
N = 4;
M = 7;

unsigned W = M - N  + 1;
unsigned bitmask = (1 << W);

unsigned result = (data >> N) & bitmask;

printf("For 0x%04X, result is 0x%04X", data, result);


    return EXIT_SUCCESS;
}