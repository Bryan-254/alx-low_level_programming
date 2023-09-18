#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string to be reversed
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i;
	char x;

	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		x = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = x;
	}
}
