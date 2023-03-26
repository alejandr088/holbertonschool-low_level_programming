#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: name to print
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
	char newline[] = "\n";

	f(newline);
}

