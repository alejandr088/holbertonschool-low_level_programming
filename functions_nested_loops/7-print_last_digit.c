#include "main.h"
#include <stdio.h>
/**
 *  * print_last_digit - imprime el ultimo digito de un entero
 *   * @num: ~
 *    * Return: valor del ultimo numero
 */
int print_last_digit(int num)
{
		int udigito;

			udigito = (num % 10);
if (udigito < 0)
{
udigito = (-1 * udigito);
}

_putchar(udigito + '0');
return (udigito);
}
