#include "main.h"
int sqrt_find(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - find the nat square
 * @n: the number.
 * Return: -1 if error, or the nat square.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
{
	return (-1);
}
if (n == 1)
{
	return (1);
}
if (n == 0)
{
	return (0);
}
	else
{
	return (sqrt_find(n, 1));
}
}

/**
 * sqrt_find - search the square recursively.
 * @n: the number
 * @i: the int to check
 *  Return: square root on n, -1 if error.
 */
int sqrt_find(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_find(n, i + 1));
	}
}
