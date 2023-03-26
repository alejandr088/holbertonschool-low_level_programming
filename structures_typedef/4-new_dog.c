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
	char *name_copy;
	char *owner_copy;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(p);
		return (NULL);
	}
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(p);
		free(name_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	p->name = name_copy;
	p->age = age;
	p->owner = owner_copy;
	return (p);
}
