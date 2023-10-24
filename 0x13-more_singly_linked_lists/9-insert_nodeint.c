#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts new node at given position
 * @head: The head node of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value to store in the list
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new, *current_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current_node = *head;

	for (x = 0; current_node != NULL && x < idx - 1; x++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current_node->next;
	current_node->next = new;
	return (new);
}
