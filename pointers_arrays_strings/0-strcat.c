#include "main.h"
/**
 * *_strcat - check code
 * @dest: destiny
 * @src: source
 * Return: pointer to "dest"
 */
char *_strcat(char *dest, char *src)
{
char *go = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (go);
}
