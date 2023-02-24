#include <stdio.h>
/**
 * exercise - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
int exercise(void)
{
int nums;

for (nums = 1; nums <= 100 ; nums++)
{
printf("%d ", nums);
if (nums % 3 == 0)
{
printf("Buzz ");
}
else if (nums % 5 == 0)
{
printf("Fizz ");
}
else if (nums % 3 == 0 && nums % 5 == 0)
{
printf("BuzzFizz ");
printf(" ");
}
printf("\n");
}
return (0);
}
