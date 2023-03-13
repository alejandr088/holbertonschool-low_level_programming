#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - add two numbers
 * @argc: count arguments
 * @argv: array arguments
 * Return: result, or print "error" & return 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int c = 0;
	int result = 0;
	char *s;

	while (i < argc)
	{
		s = argv[i];
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		result += c;
	}
	printf("%d\n", result);
	return (0);
}
