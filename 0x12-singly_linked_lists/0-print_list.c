#include "lists.h"

/**
 * print_list - This function prints all elements of a list_t list
 * @h: Pointer to head of the linked list
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nd;

	nd = 0; /*Start count from zero*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nd++;
	}

	return (nd);
}
