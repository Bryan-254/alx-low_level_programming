#include "lists.h"

/**
 * get_dnodeint_at_index - This returns nth node of a dlistint_t linked list
 * @head: This parameter is a pointer to the head of the list.
 * @index: This is the index of the node, starting from 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (node_count == index)
		{
			return (current_node);
		}

		current_node = current_node->next;
		node_count++;
	}
	/* if the node does not exist */
	return (NULL);
}
