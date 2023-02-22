/*
 * File: 0-isupper.c
 * Auth: alejandr088
 *
 */

#include <stdio.h>
#include "main.h"

/**
 * _isupper - chequea caracteres en mayuscula
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
