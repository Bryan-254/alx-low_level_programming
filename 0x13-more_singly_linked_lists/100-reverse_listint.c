#include "lists.h"

/**
 * reverse_listint - Function that reverses listint_t linked list
 * @head: This is a pointer to a pointer to the head
 * Return: This is a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *tempo;

	while (*head != NULL)
	{
		tempo = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tempo;
	}

	*head = prev;
	return (*head);
}
