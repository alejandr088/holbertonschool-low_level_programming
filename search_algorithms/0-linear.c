#include "search_algos.h"

/**
 * linear_search - function to search linearly
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for.
 */
int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    if (!array)
    {
    return (-1);
    }

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        return (i);
    }
    
    if (i == size)
    return (-1);

    return (-1);
}