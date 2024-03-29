#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - single linked lists
 * @str: string
 * @len: length of str
 * @next: point to next node
 *
 * Description: gingly linked lists node struct
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

char *strdup(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

int _putchar(char c);
#endif /* LISTS_H */
