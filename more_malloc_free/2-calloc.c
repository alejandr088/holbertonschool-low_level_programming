#include <stdlib.h>
/**
 * *_calloc - funct that allocates mem for an array.
 * @size: size.
 * @nmemb: numb of elements.
 * Return: ptr to the allocated memory, fails || nmemb / size = 0 return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; i < total_size; i++)
		*(p + i) = 0;
	return (ptr);
}
