#include "main.h"

/**
 * print_numbers - check code
 *
 * Return: Always 0
 */
void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
putchar('\n');
}
