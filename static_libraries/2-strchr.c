#include <stdio.h>
#include "main.h"
/**
 * *_strchr - Check code
 * @s: pointer to s.
 * @c: character
 * Return: the s + i value coincidence.
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
