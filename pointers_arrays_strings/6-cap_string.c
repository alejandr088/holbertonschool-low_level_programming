#include "main.h"
/**
 * *cap_string - check code
 * @str: string
 * Return: capitalized first word in strings.
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[0] >= 'a' && str[0] <= 'z')
str[i] -= 32;
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
i++;
}
return (str);
}
