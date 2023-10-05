#include "main.h"
#include <string.h>

/**
 * _realloc - Function that reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size of allocated space
 * @new_size: The new size of new memory block
 * Return: Pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *m; /*Declare pointer to a block of memory*/

	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	/*allocates a new block of memory of size new_size*/
	m = malloc(new_size);

	if (m == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < old_size && x < new_size; x++)
	{
		m[x] = ((char *)ptr)[x];
	}
	free(ptr);
	return (m);
}
