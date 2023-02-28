#include "main.h"
/**
 * rev_string - check code
 * @s: single string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int len;
int i;
int j;
char count;

for (len = 0; s[len] != 0; len++)
{
i = 0;
j = len / 2;
putchar(s[len]);
}
while (j--)
{
count = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = count;
i++;
}
}
