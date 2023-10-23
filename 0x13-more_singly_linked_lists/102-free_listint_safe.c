#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list
 * @h: Pointer to the head of the list
 * Return: void
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list_size;
	listint_t *current_node, *tmp;
	list_size = 0;

	if (h == NULL)
	{
		return (0);
	}
	
	current_node = *h;

	while (current_node != NULL)
	{
		list_size++;
		tmp = current_node;
		current_node = current_node->next;
		free(tmp);
		if (tmp <= current_node)
		{
			break;
		}
	}

	*h = NULL; /*Original head pointer set to NULL*/
	return (list_size);
}
