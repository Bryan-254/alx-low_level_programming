#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: The number of array elements
 * @size: The array size
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m; /*This pointer holds return value of malloc*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = calloc(nmemb, size); /*Allocates the memory*/

	if (m == NULL) /*If malloc fails*/
	{
		return (NULL); /*calloc returns NULL*/
	}
	else
	{
		return (m); /*Return a pointer to newly allocated memory*/
	}
}
