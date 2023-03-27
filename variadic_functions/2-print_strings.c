#include "variadic_functions.h"
/**
 * print_strings - print strings plus new line.
 * @separator: string to be printed btwn strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *p;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
