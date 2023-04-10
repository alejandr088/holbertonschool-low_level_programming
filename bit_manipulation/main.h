#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @n: int stored in node.
 * @prev: pointer to prev element of list.
 * @next: point to next element.
 *
 * Description: double linked lists node struct
 */

unsigned int binary_to_uint(const char *b);

int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
