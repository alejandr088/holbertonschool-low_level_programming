#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("last digit of %d is %d ", n, ldigit);
	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");

	/* your code goes there */
	return (0);
}
