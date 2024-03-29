#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num = 0;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == n - 1)
			printf("%d", num);
		else
			printf("%i%s", num, separator);
	}
	printf("\n");
	va_end(args);
}
