#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an integer array
 *
 * @array: The integer array to iterate over
 * @size: The size of the array
 * @action: The function to execute on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

