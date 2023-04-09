#include "lists.h"

/**
 * list_len - Return the # of elements in a LL.
 * @h: pointer to head of list_t.
 *
 * Return: # of elements in list_t.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
