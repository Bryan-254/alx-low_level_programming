#include "lists.h"

/**
 * list_len - This function finds the list length
 * @h: This is the head node
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
