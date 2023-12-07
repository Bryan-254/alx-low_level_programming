#include "lists.h"

/**
 * sum_dlistint - This calculate the sum of all elements in doubly linked list
 * @head: This parameter is a pointer to the head of the doubly linked list
 * Return: Sum of all elements in the list, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int elements_sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		elements_sum += head->n;
		head = head->next;
	}
	return (elements_sum);
}
