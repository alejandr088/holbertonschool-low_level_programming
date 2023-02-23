#include "main.h"

/**
 * more_numbers - check code
 *
 */
void more_numbers(void)
{
int num = 0;
int diezveces = 0;
while (diezveces++ <= 9)
{
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
putchar('\n');
}
}
