#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function.
 * @argc: count of arguments.
 * @argv: an array of strings.
 * Return: always 0, 1 if error.
 */

int main(int argc, char **argv)
{
	int result;

		result = (int) *argv[1] * (int) *argv[2];
		printf("%d\n", result);
	return (0);
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
}

