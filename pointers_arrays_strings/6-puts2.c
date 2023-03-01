#include "main.h"
/**
 * puts2 - check code
 * @str: a string
 * Return: Always 0.
 */
void puts2(char *str)
{
int len = 0, i;
while (str[len] != '\0')
{
len++;
for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}
}
}
