/**
 * === Bunch Of Constants === 
 *
 * Define the following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 * 
 * Print with following formats:
 *  - moonLanding:
 *      - integer, 10 characters width, padded with spaces
 *      - integer, 10 characters width, padded with zeroes
 *  - speedOfLight:
 *      - floating point without digits after decimal point
 *      - scientific notation with 3 digit of precision
 *  - pi:
 *      - floating point with 2 digits of precision
 *      - scientific notation with 1 digit of precision, sign forced
 *  - hexaDead:
 *      - unsigned hexadecimal integer, uppercase, leading 0x
 *      - unsigned integer, 6 characters width
 *  - hexaSecret:
 *      - unsigned hexadecimal integer, lowercase, no leading 0x
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int moonLanding = 1969;
double speedOfLight = 299792458.;
double pi = 3.142;
unsigned hexaDead = 0xDEAD;
unsigned hexaSecret = 51966;

int main()
{
    printf("moonlanding integer, 10 characters width, padded with spaces: %10d\n", moonLanding);
    printf("moonlanding integer, 10 characters width, padded with zeroes: %010d\n\n", moonLanding);
    printf("sppedoflight floating point without digits after decimal point: %.0f\n", speedOfLight);
    printf("sppedoflight scientific notation with 3 digit of precision: %.3E\n\n", speedOfLight);
    printf("pi floating point with 2 digits of precision: %.2f\n", pi);
    printf("pi scientific notation with 1 digit of precision, sign forced: %+.1e\n\n", pi);
    printf("hexaDead unsigned hexadecimal integer, uppercase, leading 0x 0x%X\n", hexaDead);
    printf("hexaDead unsigned integer, 6 characters width %6u\n\n", hexaDead);
    printf("hexaSecret unsigned hexadecimal integer, lowercase, no leading 0x %6x\n", hexaSecret);

    return EXIT_SUCCESS;
}