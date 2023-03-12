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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

