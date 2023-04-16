#include "hash_tables.h"

/**
 * hash_table_get - Return a value associated with a key in a hash table
 * @ht: hash table to look into
 * @key: key
 *
 * Return: value associated with the key, or NULL if fail.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

