#include "3-calc.h"
/**
 * get_op_func - a function to get another funct.
 * @s: string of operation.
 * Return: always 0.
 */

int (*get_op_func(char *s))(int, int)
{
op_t op_s[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
{
	if (*(op_s[i].op) == *s)
	return (op_s[i].f);
	i++;
}
	printf("Error\n");
	exit(99);
}
