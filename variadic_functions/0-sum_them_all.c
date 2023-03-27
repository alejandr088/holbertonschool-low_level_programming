#include "variadic_functions.h"
/**
 * sum_them_all - sum of all params.
 * @n: params
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0, sum = 0;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
