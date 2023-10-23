#include "lists.h"

/**
 * print_listint - Function that prints all elements of listint_t list
 * @h: Pointer to head of the linked list
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
