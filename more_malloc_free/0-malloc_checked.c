#include <stdlib.h>
/**
 * *malloc_checked - funct that allocates memory with malloc.
 * @b: a positive integer.
 * Return: pointer to the allocated memory or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

