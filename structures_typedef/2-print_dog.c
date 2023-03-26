#include "dog.h"
/**
 * print_dog - prints a dog structure
 * @d: pointer to dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s\n", d->name);
		}
	else
	{
		printf("(nil)\n");
	}
	printf("Age: %.1f\n", d->age);
	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)\n");
	}
}
