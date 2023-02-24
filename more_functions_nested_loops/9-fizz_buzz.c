#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */
int main(void)
{
int nums;

for (nums = 1; nums <= 99; nums++)
{
if (nums == 100)
printf("Buzz");
if (nums % 3 == 0 && nums % 5 == 0)
{
printf("FizzBuzz ");
}
else if (nums % 3 == 0)
{
printf("Fizz ");
}
else if (nums % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", nums);
}
}
printf("\n");
return (0);
}
