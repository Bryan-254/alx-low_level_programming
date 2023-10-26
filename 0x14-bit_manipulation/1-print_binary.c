#include "main.h"

/**
 * print_binary - Function that prints binary representation of number
 * @n: The input to the function
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
