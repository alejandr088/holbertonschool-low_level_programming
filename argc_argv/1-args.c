#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function.
 * @argc: count of arguments.
 * @argv: an array of strings.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[]);
	return (0);
}

