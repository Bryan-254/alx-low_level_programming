#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - This function inserts new node at given position
 * @h: This parameter is a pointer to the head of the doubly linked list.
 * @idx: This is the index of the list where the new node should be added.
 * @n: This parameter is the value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int x;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_node = *h;

	for (x = 0; x < idx - 1 && current_node != NULL; x++)
		current_node = current_node->next;
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	new_node->prev = current_node;

	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
