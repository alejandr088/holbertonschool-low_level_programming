#include "main.h"
/**
 * create_array - function that creates an array.
 * @size: a positive int
 * @c: a character
 * Return: Pointer to array, NULL if fails or if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
