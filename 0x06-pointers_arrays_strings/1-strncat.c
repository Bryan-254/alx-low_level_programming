#include "main.h"
#include <string.h>

/**
 * *_strncat - Function that concatenates two strings
 * @dest: String of the source
 * @src: String of the source
 * @n: Parameter specifying number of characters to concatenate
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[len + x] = src[x];
		src++;
	}
	dest[len + x] = '\0';

	return (dest);
}

