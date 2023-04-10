#include "main.h"

/**
 * clear_bit - clear the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to set, from 0.
 *
 * Return: 1 if OK, or -1 if fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	mask = ~mask;

	*n &= mask;

	return (1);
}

