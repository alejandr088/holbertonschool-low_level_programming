#include "main.h"
/**
 * print_chessboard - Check code
 * @a: output.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8 && a[i]; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
putchar('\n');
}
}
}
