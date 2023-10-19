#include "lists.h"

/**
 * add_node_end - This function adds new node at beginning of list
 * @head: This is the head of the node
 * @str: This is the string to store
 * Return: The address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int x, count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		count++;
	}

	new->len = count;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
