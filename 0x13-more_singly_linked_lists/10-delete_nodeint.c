#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index index of linked list
 * @head: The head node of the list
 * @index: index of the list where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current_node, *prev_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current_node = *head;
	prev_node = NULL;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (-1);
	}

	while (current_node != NULL)
	{
		if (x == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		x++;
	}

	return (-1);
}
