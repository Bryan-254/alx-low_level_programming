#include "main.h"

/**
 * binary_to_uint - Function that converts binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x] != '\0')
	{
		if (b[x] == '0')
		{
			results <<= 1;
		}
		else if (b[x] == '1')
		{
			results <<= 1;
			results |= 1;
		}
		else
		{
			return (0);
		}

		x++;
	}

	return (results);
}
