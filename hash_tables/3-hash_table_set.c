#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: key value.
 *
 * Return: 1 if success, either 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = NULL, *temp = NULL;

	if (!ht || !key || *key == '\0')
		return (0);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (temp->key && strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}


