#include "hash_tables.h"

/**
 * key_index - obtain index from a key in table hash
 * @key: key
 * @size: size of the array of hash table.
 *
 * Return: índice en el que la pareja clave/valor debe ser almacenada
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}

