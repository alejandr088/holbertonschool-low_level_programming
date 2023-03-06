#include <stdio.h>
/**
 * leet - check code.
 * @str: string
 * Return: pointer to string converted
 */
char *leet(char *str)
{
char *s = str;
char leet_orig[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
char leet_reemp[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i, j;

for (i = 0; i < 10; i++)
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
