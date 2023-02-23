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
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
for (num2 = 10; num2 <= 14; num2++)
{
if (num2 >= 9)
{
putchar(num2 % 10 + '0');
}
putchar('\n');
}
}
}
