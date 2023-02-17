#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
int main(void)
{
int combis;

for (combis = 0; combis < 9; combis++)
{
putchar(combis + '0');
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
