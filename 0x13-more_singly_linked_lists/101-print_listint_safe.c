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
	const listint_t *p1, *p2;
	size_t count;

	count = 0;

	p1 = head;
	p2 = head;

	while (p1 != NULL && p2 != NULL && p2->next != NULL)
	{
		printf("[%p] %d\n", (void *)p1, p1->n);

		p1 = p1->next;
		p2 = p2->next->next;
		count++;

		if (p1 == p2)
		{
			printf("-> [%p] %d\n", (void *)p1, p1->n);
			break;
		}
	}

	if (p1 == p2)
	{
		p1 = head;
		while (p1 != p2)
		{
			printf("[%p] %d\n", (void *)p1, p1->n);
			p1 = p1->next;
			p2 = p2->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)p1, p1->n);
	}

	return (count);
}
