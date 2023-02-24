#include "main.h"
/**
 * print_triangle - check code
 * @size: single character
 */
void print_triangle(int size)
{
int fila;
int colum;
int espacio;

if (size > 0)
{
for (fila = size; fila >= 1; fila--)
{
for (espacio = size - fila; espacio > 0; espacio--)
{
putchar(' ');
}
for (colum = 1; colum <= fila; colum++)
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
