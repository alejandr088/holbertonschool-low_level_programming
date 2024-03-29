#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data (n) of a dlistint_t LL.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list || 0 if its empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

