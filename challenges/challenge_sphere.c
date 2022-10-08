#include <stdio.h>
#include <stdlib.h>

int main()
{
/**
 * === Sphere === 
 *
 * Calculate surface and volume of a sphere
 * 
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area
 *  - calculate the enclosed volume
 *  - print the radius and the results in decimal format (2 digit of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 */

double r, surface_area, volume;
const double PI = 3.14159265359;

printf("Write radius (positive number): ");
scanf("%lf", &r);
printf("\n");

surface_area = 4 * PI * r * r;
volume = 4.0 / 3 * PI * r * r * r;

printf("For radius %.2f, surface area = %.2f, volume = %.2f\n", r, surface_area, volume);
printf("For radius %.3e, surface area = %.3e, volume = %.3e\n", r, surface_area, volume);


    return EXIT_SUCCESS;
}