/*
 * File: 6-abs.c
 * Auth: alejandr088
 *
 **/

#include <stdio.h>
#include "main.h"

/**
 *  * _abs - Función que devuelve el valor absoluto de un número
 *   *
 *    * @valor: Número de entrada
 *     *
 *      * Return: El valor absoluto de valor
*/
int _abs(int valor)
{
return (((valor > 0) - (valor < 0)) * valor);
}
