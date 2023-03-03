#include "main.h"
/**
 * reverse_array - check code
 * @n: number of elements in arry
 * @a: an int
 * Return: array inversed
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < n / 2; i++)
{
j = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = j;
}
}

