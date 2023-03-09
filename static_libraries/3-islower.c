/*
 * File: 3-islower.c
 * Auth: alejandr088
 *
 */

#include <stdio.h>
#include "main.h"

/**
 * _islower - chequea caracteres en minuscula
 * @c: single letter input
 * Return: 1 si esta en minusculas, de lo contrario 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
