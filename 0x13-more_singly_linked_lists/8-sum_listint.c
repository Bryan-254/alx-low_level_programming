#include "lists.h"

/**
 * sum_listint - Function that returns sum of all data(n) of linked list
 * @head: The head node of the list
 * Return: The sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
