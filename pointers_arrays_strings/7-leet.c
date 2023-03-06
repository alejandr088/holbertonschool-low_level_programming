#include <stdio.h>
/**
 * leet - check code.
 * @str: string
 * Return: pointer to string converted
 */
char *leet(char *str)
{
char *s = str;
char leet_orig[8] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o'};
char leet_reemp[8] = {'4', '4', '3', '3', '1', '1', '0', '0'};
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == leet_orig[i])
{
s[j] = leet_reemp[i];
}
}
}
return (str);
}
