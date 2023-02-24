#include "main.h"
/**
 * print_diagonal - check code
 * @n: single character
 */
void print_diagonal(int n)
{
int a;
int b;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
