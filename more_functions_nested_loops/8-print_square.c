#include "main.h"
/**
 * print_square - check code
 * @size: single character
 */
void print_square(int size)
{
int fila;
int colum;

if (size > 0)
{
for (fila = 0; fila < size; fila++)
{
for (colum = 0; colum < size; colum++)
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
