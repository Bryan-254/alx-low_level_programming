#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: The inital segment
 * @accept: The accepted bytes
 * Return: The number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, bool;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		bool = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (x);
}
