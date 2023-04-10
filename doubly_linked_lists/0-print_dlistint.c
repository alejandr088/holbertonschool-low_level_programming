#include "lists.h"

/**
 * print_dlistint - print all elemets of a dlist.
 * @h: pointer to head of list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
