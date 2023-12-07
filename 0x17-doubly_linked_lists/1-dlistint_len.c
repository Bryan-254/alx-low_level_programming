#include "lists.h"

/**
 * dlistint_len - Function return number of elements in linked dlistint_t list
 * @h: This parameter is a pointer to the head of the doubly linked list.
 *
 * Return: Number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
