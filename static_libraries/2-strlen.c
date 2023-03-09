#include "main.h"
/**
 * _strlen - check code
 * @s: single character
 * Return: Always 0.
 */
int _strlen(char *s)
{

int len = 1, sum = 0;
char pl = s[0];

while (pl != '\0')
{
	sum++;
	pl = s[len++];
}
return (sum);
}
