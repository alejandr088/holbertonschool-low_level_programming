#include "main.h"
/**
 * swap_int - check code
 * @a: single character
 * @b: single characters
 *
 */
void swap_int(int *a, int *b)
{
b = a;
*a = *b;
a = b;
*b = *a;
}
