#include "main.h"
/**
 * *_strchr - Check code
 * @s: pointer to s.
 * @c: character
 * Return: the s + i value coincidence.
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
