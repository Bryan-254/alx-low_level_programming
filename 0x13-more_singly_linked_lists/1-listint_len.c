#include "lists.h"

/**
 * listint_len - This function finds the list length
 * @h: This is the head node
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
