#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: count argument
 * @argv: array argument
 * Return: 0 if OK, 1 if error.
 */

int main(int argc, char **argv)
{
int a = 0, b = 0;

if (argc == 3)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
}
	else if (argc < 3)
{
		printf("Error\n");
		return (1);
		}
return (0);
}
