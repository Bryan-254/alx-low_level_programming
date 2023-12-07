#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at index of a dlistint_t linked list
 * @head: This parameter is a pointer to the head of the doubly linked list.
 * @index: This parameter is the index of the node to be deleted.
 * Return: Returns 1 if successful, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *preceding_node;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}
	while (current_node != NULL && x < index)
	{
		current_node = current_node->next;
		x++;
	}
	if (current_node == NULL)
	{
		return (-1);
	}

	preceding_node = current_node->prev;
	preceding_node->next = current_node->next;

	if (current_node->next != NULL)
	{
		current_node->next->prev = preceding_node;
	}

	free(current_node);
	return (1);
}
