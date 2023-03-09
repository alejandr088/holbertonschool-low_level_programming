#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - Check code
 * @s: pointer to s.
 * @accept: bytes to search.
 * Return: a pointer to byte in s, or NULL.
 */

char *_strpbrk(char *s, char *accept)
{

while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
