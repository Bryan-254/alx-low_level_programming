#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Returns 1 if its prime otherwise its 0
 * @n: The number
 *
 * Return: An integer
 */

int is_prime_number(int n)
{
	return (verify_prime(n, 1));
}

/**
 * verify_prime - Inspects if the number is prime
 * @n: The number
 * @x: The iterator
 *
 * Return: 1 or 0
 */

int verify_prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if (x > (n / x))
		return (1);
	return (verify_prime(n, x + 1));
}
