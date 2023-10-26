#include "main.h"

/**
 * print_binary - Function that prints binary representation of number
 * @n: The input to the function
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int numberof_bits = sizeof(unsigned long int) * 8;
	int shift;
	int x;

	for (x = numberof_bits - 1; x >= 0; x--)
	{
		shift = x;
		if (n & (1UL << shift))
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		if ((shift & 3) == 0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
