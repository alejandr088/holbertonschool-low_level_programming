#include "main.h"
/**
 * print_square - check code
 * @size: single character
 */
void print_square(int size)
{
int a;
int b;

if (size > 0)
{
for (b = 0; b < size; b++)
{
for (a = 0; a < b; a++)
{
putchar('#');
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
