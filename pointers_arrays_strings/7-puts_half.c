#include "main.h"
/**
 * puts_half - check code
 * @str: a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int len = 0, i, j;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
}
else if (len % 2)
{
for (i = (len - 1) / 2; j < len - 1; j++)
{
putchar(str[j + 1]);
}
}
putchar('\n');
}
