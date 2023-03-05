#include "main.h"
/**
 * *_memset - Check code
 * @s: pointer to s.
 * @n: number
 * @b: byte
 * Return: the s value.
 */

char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
