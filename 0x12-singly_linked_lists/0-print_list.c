#include "lists.h"

/**
 * print_list - This function prints all elements of a list_t list
 * @h: Pointer to head of the linked list
 * Return: Number of nodes in the list
 */

size_t print_list(const listint_t *h)
{
	size_t x;

	for (x = 0 ; h != NULL ; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
