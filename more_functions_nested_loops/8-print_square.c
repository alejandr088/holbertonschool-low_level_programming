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
for (a = 0; a == size; a++)
{
for (b = 0; b < a; b++)
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
