#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at given index
 * @n: The pointer to the integer
 * @index: This is the index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int datatypesize;

	datatypesize = (sizeof(unsigned long int) * 8);

	if (index >= datatypesize)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
