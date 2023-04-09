#include "lists.h"

/**
 * print_list - print all elemets of a list.
 * @h: pointer to head of list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%lu] (nil)\n", h->len);
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

	return (count);
}