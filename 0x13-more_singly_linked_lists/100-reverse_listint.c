#include "lists.h"

/**
 * reverse_listint - Function that reverses listint_t linked list
 * @head: This is a pointer to a pointer to the head
 * Return: This is a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = *head;
	listint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next;
	}
	*head = prev_node;
	return (*head);
}
