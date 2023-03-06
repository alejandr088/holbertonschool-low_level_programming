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

			for (int i = 2; i <= n; i++)
			{
				result = result * i;
			}
			return (result);
		}
}
