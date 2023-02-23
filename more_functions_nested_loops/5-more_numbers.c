#include "main.h"

/**
 * more_numbers - check code
 *
 */
void more_numbers(void)
{
long int num = 0;
int diezveces = 0;
while (diezveces++ <= 9)
{
for (num = 0; num <= 14; num++)
{
putchar(num + '0');
}
putchar('\n');
}
}
