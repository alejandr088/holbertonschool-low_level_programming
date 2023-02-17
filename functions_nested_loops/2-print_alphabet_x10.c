/*
 * File: 2-print_alphabet_x10.c
 * Auth: alejandr088
 *
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - imprime el abcdario 10 veces
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int abcbig = 0;
char abc10;
while (abcbig++ <= 9)
{
for (abc10 = 'a'; abc10 <= 'z'; abc10++)
_putchar(abc10);
_putchar('\n');
}
}

