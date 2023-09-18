#include "main.h"

/**
 * swap_int - Function that swaps values of two integers
 * @a: value number 1
 * @b: value number 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
