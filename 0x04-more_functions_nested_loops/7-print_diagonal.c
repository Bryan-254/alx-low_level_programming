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
		int a, b;

		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < n ; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < 1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
