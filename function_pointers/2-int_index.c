#include "function_pointers.h"
/**
 * int_index - search for int in an array
 * @array: pointer to the int array
 * @size: size of array
 * @cmp: pointer to function (compare)
 * Return: index of first element for which cmp doesn't return 0, or -1 if none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

