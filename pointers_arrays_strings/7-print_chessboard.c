#include "main.h"
/**
 * print_chessboard - Check code
 * @a: pointer to s.
 * Return: a pointer to byte in s, or NULL.
 */

void print_chessboard(char (*a)[8])
{
char c;
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
c = *(a[i] + j);
_putchar(c);
}
putchar('\n');
}
}
