#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t left, right, half, i;

	if (!array || size == 0)
		return (-1);

    left = 0;
    right = size - 1;

	while (left <= right)
	{

        printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		half = (left + right) / 2;

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
