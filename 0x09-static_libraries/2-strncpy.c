#include "main.h"

/**
 * *_strncpy - Function that copies a string
 * @dest: string of the destination
 * @src: string of the source
 * @n: The number of bytes to copy
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		/*Copies contents of source to destination*/
		dest[x] = src[x];
	while (x < n)
		/*Makes sure remaining character in dest is terminated*/
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
