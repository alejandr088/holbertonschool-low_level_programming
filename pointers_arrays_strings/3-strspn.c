#include "main.h"
/**
 * *_strspn - Check code
 * @s: pointer to s.
 * @accept: match bytes.
 * Return: the s + i value coincidence.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
}
return (i);
}
