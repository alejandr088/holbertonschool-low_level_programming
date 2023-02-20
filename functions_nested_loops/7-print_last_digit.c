/**
 * File: 7-print_last_digit.c
 * Author: alejandr088
 * @n: int type number
 * * Return: return value of last digit
 */
#include <stdio.h>
#include "main.h"

/**
 *   * print_last_digit - Prints the last digit of a number
 *     * @n: The number to be treated
 *       *
 *         * Return: Value of the last digit of number
 *           */

int print_last_digit(int n)
{
int udigito;

udigito = (n % 10);
if (udigito < 0)
{
udigito = (-1 * udigito);
}
_putchar(udigito + '0');
return (udigito);
}
