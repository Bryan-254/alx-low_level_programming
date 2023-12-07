#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at end of dlistint_t list
 * @head: This parameter is a pointer to the head of the doubly linked list.
 * @n: This parameter is the value to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nd, *temp_var;

	new_nd = malloc(sizeof(dlistint_t));
	if (!new_nd)
	{
		return (NULL);
	}

	new_nd->n = n;
	new_nd->next = NULL;
	if (*head == NULL)
	{
		new_nd->prev = NULL;
		*head = new_nd;
		return (new_nd);
	}

	temp_var = *head;

	while (temp_var->next != NULL)
	{
		temp_var = temp_var->next;
	}

	temp_var->next = new_nd;
	new_nd->prev = temp_var;

	return (new_nd);
}
