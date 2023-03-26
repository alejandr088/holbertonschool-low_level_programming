#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @owner: owner name of the dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL)
		return (NULL);
	if (p == NULL || p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
