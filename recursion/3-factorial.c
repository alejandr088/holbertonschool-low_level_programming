#include "main.h"
/**
 *  * factorial - prints a the factorial of a given number n
 *   * @n: a number
 *    * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
