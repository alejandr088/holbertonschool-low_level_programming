#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	size_t left = 0, right = size - 1, half;

	while (left <= right)
	{
		half = (left + right) / 2;

		printf("Value checked array[%lu] = [%d]\n", half, array[half]);

		if (array[half] == value)
		{
			return (half);
		}
		else if (array[half] < value)
		{
			left = half + 1;
			continue;
		}
		else
		{
			right = half - 1;
			continue;
		}
	}

	return (-1);
}
