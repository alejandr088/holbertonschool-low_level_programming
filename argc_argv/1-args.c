#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function.
 * @argc: count of arguments.
 * @argv: an array of strings.
 * Return: always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

