#include <stdlib.h>
/**
 * *array_range - funct that creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: ptr to new array, || NULL if: min > max, malloc fails.
 */
int *array_range(int min, int max)
{
	int *array, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		array[i] = min++;
	return (array);
}

