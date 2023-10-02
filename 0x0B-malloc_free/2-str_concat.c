#include "main.h"
#include <string.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: The string 1
 * @s2: The string 2
 * Return: Point to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int x;
	int s1len = 0;
	int s2len = 0;
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		s1len++;
	}
	for (x = 0 ; s2[x] != '\0' ; x++)
	{
		s2len++;
	}

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		output[x] = s1[x];
	}
	for (x = 0 ; s2[x] != '\0' ; x++)
	{
		output[s1len + x] = s2[x];
	}
	return (output);
}

