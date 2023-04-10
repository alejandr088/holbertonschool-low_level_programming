#include "main.h"

/**
 * get_bit - returns value of a bit at certain index.
 * @n: The number to get bit.
 * @index: index, starting from 0.
 *
 * Return: value of the bit at index or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1;

	mask <<= index;
	if ((n & mask) == mask)
		return (1);
	else
		return (0);
}
