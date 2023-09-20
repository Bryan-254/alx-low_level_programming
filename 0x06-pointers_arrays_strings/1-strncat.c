#include "main.h"

/**
 * *_strncat - Function that concatenates two strings
 * @dest: String of the source
 * @src: String of the source
 * @n: Parameter specifying number of characters to concatenate
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[destlength + x] = src[x];
		destlength++;
		src++;
	}
	dest[destlength + x] = '\0';
	return (dest);
}

