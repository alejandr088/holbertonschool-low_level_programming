/*
 * File: 1-alphabet.c
 * Auth: alejandr088
 *
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - imprime el abcdario
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char abc;

for (abc = 'a'; abc <= 'z'; abc++)

_putchar(abc);
_putchar('\n');

}
