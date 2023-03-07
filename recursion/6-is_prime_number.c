#include "main.h"
/**
 * is_prime_number - check the code
 * @n: the number to check
 * Return: the prime number if it is, else 0.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
{
	int i = 2;

	if (i * i <= n)
	{
		i++;
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
}
