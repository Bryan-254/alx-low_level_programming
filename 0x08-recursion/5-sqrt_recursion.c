#include "main.h"

/**
 * _sqrt_recursion - Function that returns natural square root of a number
 * real_sqrt_recursion: Function recurses to find natural square root
 * @n: The number
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - Function recurses to find natural square root
 * @n: The number
 * @x: The iterator
 * Return: The natural square root of a number or -1
 */

int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return (real_sqrt_recursion(n, x + 1));
}
