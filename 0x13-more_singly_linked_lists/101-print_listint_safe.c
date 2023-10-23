#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t node_count = 0;
	int Flag_fail = 0;

	while (current_node)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_count++;

		current_node = current_node->next;

		if (node_count > 100)
		{
			Flag_fail = 1;
			break;
		}
	}

	if (Flag_fail)
	{
		exit(98);
	}

	return (node_count);
}
