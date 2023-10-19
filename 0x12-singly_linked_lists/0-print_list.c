#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - This function prints all elements of list_t list
 * @h: Pointer to head of the linked list
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t x;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	for (x = 0; h; x++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
