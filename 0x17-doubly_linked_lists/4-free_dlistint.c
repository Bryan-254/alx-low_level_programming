#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list.
 * @head: This parameter is a pointer to the head of the list.
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
