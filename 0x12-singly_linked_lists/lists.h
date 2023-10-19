#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    char *str;
    unsigned int len;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t list_lenint(const listint_t *h);
list_t *add_nodeint(listint_t **head, const char *str);
list_t *add_nodeint_end(listint_t **head, const char *str);
void free_listint(listint_t *head);
int _putchar(char c);

#endif
