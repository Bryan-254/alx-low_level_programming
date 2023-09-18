#include "main.h"

/**
 * print_array - Function that prints n elements of an array of integers
 * @a: array to be utilised
 * @n: number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
