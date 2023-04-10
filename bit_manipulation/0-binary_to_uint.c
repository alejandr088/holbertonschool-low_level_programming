#include "main.h"

/**
 * binary_to_uint - convert a bin number to unsign int
 * @b: pointer to a str of 0 & 1 char
 *
 * Return: number converted, or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num += (*b++ - '0');
	}
	return (num);
}
