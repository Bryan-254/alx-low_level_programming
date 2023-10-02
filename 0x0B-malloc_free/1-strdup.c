#include "main.h"

/**
 * _strdup - Returns a pointer to newly allocated space in memory
 * @str: The string
 * Return: pointer to a duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int count = 0;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		count++;
	}
	duplicate = malloc(sizeof(char) * count + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; str[x] != '\0' ; x++)
	{
		duplicate[x] = str[x];
	}

	return (duplicate);
}
