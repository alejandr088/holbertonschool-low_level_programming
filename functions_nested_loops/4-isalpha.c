/*
 *  * File: 4-isalpha.c
 *   * Auth: alejandr088
 *    *
**/

#include <stdio.h>
#include "main.h"

/**
 *  * _isalpha - chequea caracteres en las condiciones dadas
 *   * @c: single letter input
 *    * Return: 1 si esta en minusculas,mayus, o es caracter, de lo contrario 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
