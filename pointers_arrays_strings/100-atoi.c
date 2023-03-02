#include "main.h"

/**
 * _atoi - check code.
 * @s: a string.
 * Return: 0 if there are no numbers, or number.
 */
int _atoi(char *s)
{
int i = 0, num = 0, signo = 1;

while (s[i] != '\0')
{
if (s[i] == '-')
signo *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
while (s[i] >= '0' && s[i] <= '9')
{
num = (s[i] - '0') * signo + num * 10;
i++;
}
break;
}
i++;
}
return (num);
}
