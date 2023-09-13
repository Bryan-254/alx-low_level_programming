#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
		_putchar('\n');
	}
}