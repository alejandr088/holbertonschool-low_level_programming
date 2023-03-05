#include "main.h"
/**
 * *_memcpy - Check code
 * @src: pointer to s.
 * @dest: number
 * @n: number
 * Return: the dest value.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
