#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - This function prints all elements of list_t list
 * @h: Pointer to head of linked list
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
