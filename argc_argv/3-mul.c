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
	int result;

	if (argc > 2)
	{
		result = *argv[1] * *argv[2];
		printf("%d\n", result);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

