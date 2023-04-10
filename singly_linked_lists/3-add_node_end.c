#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of list_t list.
 * @head: Pointer to the address of the first node.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new node or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (new_node->str[new_node->len] != '\0')
		new_node->len++;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

