#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - imprime todos los nums n hasta el 98
 *
 * @n: numero desde el que imprimir
 */

void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("%i\n", 98);
}
