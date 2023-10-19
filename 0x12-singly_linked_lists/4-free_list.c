#include "lists.h"

/**
 * free_list - This  function that frees a list_t list
 * @head: Pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current);
		current = next;
	}
}
