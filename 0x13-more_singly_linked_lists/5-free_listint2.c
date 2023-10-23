#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list
 * @head: Pointer to the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp;

	if (head == NULL)
	{
		return;
	}

	current_node = *head;
	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}

	*head = NULL; /*Original head pointer set to NULL*/
}
