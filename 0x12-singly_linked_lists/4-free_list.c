#include "lists.h"

/**
 * free_list - This  function that frees a list_t list
 * @head: Pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	head = NULL;
}
