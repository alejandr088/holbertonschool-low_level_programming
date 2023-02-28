#include "main.h"
/**
 * print_rev - check code
 * @s: single string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != 0)
{
len++;
}
while (len > 0)
{
len--;
putchar(s[len]);
}
putchar('\n');
}
