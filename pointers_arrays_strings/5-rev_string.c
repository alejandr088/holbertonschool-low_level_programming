#include "main.h"
/**
 * rev_string - check code
 * @s: single string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len = 0;

while (s[len] != 0)
{
len++;
}
for (s[len] = 0; len > 0; len++)
{
len--;
putchar(s[len]);
}
}
