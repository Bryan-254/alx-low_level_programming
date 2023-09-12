#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: parameter to be checked.
 * Return: 1 or 0 or -1
 * Prints: + or 0 or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
