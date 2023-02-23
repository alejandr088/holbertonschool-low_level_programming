#include "main.h"

/**
 * more_numbers - check code
 *
 */
void more_numbers(void)
{
int num = 0;
int num2 = 10;
int diezveces = 0;
while (diezveces++ <= 9)
{
for (num = 0; num <= 14; num++)
{
for (num2 = 10; num2 <= 14; num2++)
{
putchar(num + '0');
putchar(num2 + '0');
}
putchar('\n');
}
}
}
