#include "lists.h"

/**
 * free_listint - This  function that frees a list_t list
 * @head: Pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	head = NULL;
}
