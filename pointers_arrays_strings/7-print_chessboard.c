#include "main.h"
/**
 * print_chessboard - Check code
 * @a: pointer to s.
 * Return: a pointer to byte in s, or NULL.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
_putchar('\n');
}
}
}
