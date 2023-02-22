/*
 * File: 0-isupper.c
 * Auth: alejandr088
 *
 */

#include "main.h"

/**
 * _isupper - chequea caracteres en mayuscula
 * @c: single letter input
 * Return: 1 si esta en minusculas, de lo contrario 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
