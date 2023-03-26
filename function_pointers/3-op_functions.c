#include "function_pointers.h"
/**
 * op_add - a function that returns the sum of a & b.
 * @a: a.
 * @b: b.
 * Return: c.
 */

int op_add(int a, int b)
{
int c = a + b;
return (c);
}

/**
 * op_sub - a function that returns the difference of a - b.
 * @a: a.
 * @b: b.
 * Return: c.
 */


int op_sub(int a, int b)
{
int c = a - b;
return (c);
}

/**
 * op_mul - a function that returns the product of a & b.
 ** @a: a.
 * @b: b.
 * Return: c.
 */
int op_mul(int a, int b)
{
int c = a * b;
return (c);
}

/**
 * op_div - a function that returns the result of a / b.
 ** @a: a.
 * @b: b.
 * Return: c.
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (0);
int c = a / b;
return (c);
}

/**
 * op_mod - a function that returns the remainder of a / b.
 * @a: a.
 * @b: b.
 * Return: c.
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
int c = a % b;
return (c);
}
