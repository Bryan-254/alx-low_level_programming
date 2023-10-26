#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at given index
 * @n: The integer from which bit value is got
 * @index: The index to get bit from
 * Return: value of bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int datatypesize;

	datatypesize = (sizeof(unsigned long int) * 8);

	if (index >= datatypesize)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
