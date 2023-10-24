#include "lists.h"

/**
 * sum_listint - Function that returns sum of all data(n) of linked list
 * @head: The head node of the list
 * Return: The sum of all the data (n) of linked list
 */

int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		summation += current_node->n;
		current_node = current_node->next;
	}

	return (summation);
}
