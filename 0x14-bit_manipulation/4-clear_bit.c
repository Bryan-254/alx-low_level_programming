#include "main.h"

/**
 * clear_bit - Function that sets value of a bit to 0 at given index
 * @n: The pointer to unsigned long int
 * @index: the index, starting from 0 of bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int datatypesize;
	unsigned long int mask;

	datatypesize = (sizeof(unsigned long int) * 8);

	if (index >= datatypesize)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n & ~mask;

	return (1);
}
