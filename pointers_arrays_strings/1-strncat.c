#include "main.h"
/**
 * *_strncat - check code
 * @dest: destiny
 * @src: source
 * @n: int
 * Return: pointer to "dest"
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;

while (dest[a] != '\0')
{
a++;
}
while (b < n && src[n] != '\0')
{
dest[a] = src[a];
a++;
b++;
}
return (dest);
}
