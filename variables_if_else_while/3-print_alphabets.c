#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
int main(void)
{
	char c = 'a';
	char b = 'A';

	for (c = 'a'; c <= 'z'; c++ && b = 'A'; b <= 'Z'; b++)
	putchar(c);
	putchar(b);
	putchar('\n');

	return (0);
}

