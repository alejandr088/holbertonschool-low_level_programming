#include "main.h"

/**
 * _isdigit - check code
 * @c: single character input
 * Return: 1 si esta en minusculas, de lo contrario 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
