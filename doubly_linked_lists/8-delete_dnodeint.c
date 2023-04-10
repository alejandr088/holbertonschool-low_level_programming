#include "lists.h"

/**
 * delete_dnodeint_at_index - Del the node at indx of a dlistint_t LL
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if its OK, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	if (*head == NULL)
		return (-1);

	while (current != NULL && index > 0)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	if (current == *head)
		*head = current->next;
	else
		prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = prev;

	free(current);
	return (1);
}

