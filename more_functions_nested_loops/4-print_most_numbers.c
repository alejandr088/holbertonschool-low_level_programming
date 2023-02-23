#include "main.h"

/**
 * print_most_numbers - check code
 *
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
	if (num != 2 || num != 4)
	{
		putchar(num + '0');
}
}
putchar('\n');
}
