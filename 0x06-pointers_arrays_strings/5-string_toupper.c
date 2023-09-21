#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase
 * @p: The pointer to be used
 * Return: p
 */

char *string_toupper(char *p)
{
	int x;

	x = 0;
	while (p[x] != '\0')
	{
		if (p[x] >= 'a' && p[x] <= 'z')
			p[x] = p[x] - 32;
		x++;
	}
	return (p);
}
