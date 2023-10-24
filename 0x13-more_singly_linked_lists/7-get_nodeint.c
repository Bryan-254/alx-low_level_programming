#include "lists.h"

/**
  * get_nodeint_at_index - This function returns nth node of linked list
  * @head: Head node of the list
  * @index: The index of the node, starting at 0
  * Return: Pointer to the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		x++;
	}

	return (head);
}
