#include "lists.h"

/**
 * free_list - Frees a list_t.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

