#include "main.h"
/**
 * more_numbers - check code
 *
 */
void more_numbers(void)
{
int num;
int x10;
for (num = 0; num < 10; num++)
{
for (x10 = 0; x10 <= 14; x10++)
{
if (x10 > 9)
{
putchar(x10 / 10 + '0');
}
putchar(x10 % 10 + '0');
}
putchar('\n');
}
}
