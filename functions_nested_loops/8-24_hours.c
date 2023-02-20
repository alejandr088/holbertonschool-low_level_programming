#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - imprime cada minuto y hora del dia
 *
 * Return: horas y minutos durante 24hs
 *
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');

	_putchar('\n');
		}
	}
}
