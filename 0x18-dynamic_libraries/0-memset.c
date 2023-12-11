#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory area
 * @b: The constant byte
 * @n: The number of bytes
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		s[x] = b;
	return (s);
}
