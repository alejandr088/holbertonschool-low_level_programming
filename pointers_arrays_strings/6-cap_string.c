#include "main.h"
/**
 * *cap_string - check code
 * @str: a string
 * Return: characters in uppercase
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
