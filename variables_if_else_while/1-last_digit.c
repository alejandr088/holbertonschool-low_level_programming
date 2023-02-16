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
	float ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("last digit of %d is %d", n, ldigit);
	if (n > 5)
		printf("%d and is greater than 5", n);
	else if (n == 0)
		printf("%d and is 0", n);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", n);

	/* your code goes there */
	return (0);
}
