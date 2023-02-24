#include "main.h"
/**
 * more_numbers - check code
 *
 */
void more_numbers(void)
{
int num = 0;
int diezveces = 0;
for (num = 0; num <= 9; num++)
{
for (diezveces = 0, diezveces <= 14; diezveces++)
{
if (num >= 9)
{
putchar(num / 10 + '0');
}
putchar(num % 10 + '0');
}
putchar('\n');
}
}
