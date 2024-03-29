#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked lists
 * @n: int stored in node.
 * @prev: pointer to prev element of list.
 * @next: point to next element.
 *
 * Description: double linked lists node struct
 */
typedef struct dlistint_s
{
	int n;
	char *str;
	struct dlistint_s *prev;
	struct dlistint_s *next;
	} dlistint_t;

char *strdup(const char *s);
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int _putchar(char c);

#endif /* LISTS_H */
