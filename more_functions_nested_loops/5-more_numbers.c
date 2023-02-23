#include "main.h"

/**
 * print_most_numbers - check code
 *
 */
void print_most_numbers(void)
{
int num;
char diezveces = 0;
while (diezveces++ <= 9)
{
for (num = 0; num <= 14; num++)
{
putchar(num + '0');
putchar('\n');
}
}
}
