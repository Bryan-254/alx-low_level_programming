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
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
