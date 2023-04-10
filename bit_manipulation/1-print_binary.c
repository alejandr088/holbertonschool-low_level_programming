#include "main.h"

/**
 * print_binary - print the bin represent of a number
 * @n: the number to convert.
 *
 * Return: number converted.
 */

void print_binary(unsigned long int n)
{
	unsigned int i, flag = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
}
