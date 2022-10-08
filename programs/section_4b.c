#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
  printf("Please write a char: ");
  char c = "a";
  c = getchar(); 
  printf("Char c = %d\n", c);
  printf("Char c = %c\n", c);

    return EXIT_SUCCESS;
}