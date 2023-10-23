#include "lists.h"

/**
 * add_nodeint_end - This function adds new node at beginning of list
 * @head: This is the head of the node
 * @n: Integer to be added to new node
 * Return: The address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current_node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new;

	return (new);
}
