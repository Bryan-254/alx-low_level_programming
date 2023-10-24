#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list & return head node’s data
 * @head: A pointer to a pointer to the head node
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
