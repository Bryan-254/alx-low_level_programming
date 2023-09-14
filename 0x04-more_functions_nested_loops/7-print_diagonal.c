#include "main.h"

/**
 * print_diagonal - Function that draws diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 * Return:
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, b;

		for (i = 0 ; i < n ; i++)
		{
			for (b = 0 ; b <= i ; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
