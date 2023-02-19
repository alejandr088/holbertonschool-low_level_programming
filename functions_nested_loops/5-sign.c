/*
 *  *  * File: 5-sign.c
 *   *   * Auth: alejandr088
 *    *    *
 *    **/

#include <stdio.h>
#include "main.h"

/**
 *  *  * print_sign - imprime el signo de un numero
 *   *   * @n: single number input
 *    *    * Return: 1 si n > 0, 0 si n es 0, y -1 si n < 1
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
