#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner name of the dog.
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	while (p != NULL)
	{
		p = malloc(sizeof(dog_t));
	if (p)
	{
		free(p);
		return (p);
	}
	p->name = malloc(sizeof(char) * strlen(name) + 1);
	if (p->name)
	{
		free(p);
		return (p);
	}
	p->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (p->owner)
	{
		free(p->name);
		free(p);
		return (p);
	}
	}
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);
	return (p);
}
