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

for (combis = 0; combis <= 9 ;combis++)
{
	putchar(combis + '0');
	if (combis==9)
		continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
