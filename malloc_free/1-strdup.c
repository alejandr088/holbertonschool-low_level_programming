#include "main.h"
/**
 * *_strdup - function that creates an array.
 * @str: string to copy
 * Return: Pointer, NULL if fails or if str = NULL.
 */
	char *_strdup(char *str)
{
	unsigned int i;
	char *copy;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + len) != '\0')
	len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(copy + i) = *(str + i);
	*(copy + len) = '\0';
	free(copy);
	return (copy);
}
