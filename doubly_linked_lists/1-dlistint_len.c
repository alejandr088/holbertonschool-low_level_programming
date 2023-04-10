#include "lists.h"

/**
 * dlistint_len - returns # of elements in a linked dlistint_t.
 * @h: pointer to head of list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}

