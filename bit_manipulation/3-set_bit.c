#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given indx.
 * @n: pointer to number.
 * @index: index of bit to set, from 0.
 *
 * Return: 1 if OK, -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;

	*n |= mask;
	return (1);
}
