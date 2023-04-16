#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: key value.
 *
 * Return: 1 if success, 0 if fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!ht || !key || *key == '\0')
		return (0);

	unsigned long int index;
	hash_node_t *new_node = NULL, *temp = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
