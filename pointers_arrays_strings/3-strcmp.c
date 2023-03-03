#include "main.h"
/**
 * _strcmp - check code
 * @s1: first string
 * @s2: snd string
 * Return: n or difference btwn s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
int n = 0;

while (s1[n] == s2[n])
{
if (s1[n] == '\0')
{
return (n);
}
n++;
}
return (s1[n] - s2[n]);
}
