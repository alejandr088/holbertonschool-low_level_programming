#include "main.h"
/**
 *  * factorial - prints a the factorial of a given number n
 *   * @n: a number
 *    * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		{
		return (-1);
		}
	else if (n == 0)
	{
		return (1);
	}
	else
		{
			int result = 1;
			int i = 2;

			for (; i <= n; i++)
			{
				result *= i;
			}
			return (result);
		}
}
