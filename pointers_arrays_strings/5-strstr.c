#include "main.h"
/**
 * *_strstr - Check code
 * @haystack: str searched.
 * @needle: substring to be find (returned)
 * Return: a pointer to menctioned substring.
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{
char *s = haystack;
char *a = needle;
while (*s == *a && *a != '\0')
{
a++;
s++;
}
if (*a == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
