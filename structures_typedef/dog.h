#ifndef _DOG_H
#define _DOG_H
#include "main.h"
/**
 * struct dog - a struct that represents a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

struct dog
{
char *name; /**< Name of the dog */
float age; /**< Age of the dog */
char *owner; /**< Owner name of the dog */
};
#endif
