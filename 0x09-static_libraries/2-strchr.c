#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: string
 * @c: character
 * Return: Pointer to first occurrence of the character c or Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
