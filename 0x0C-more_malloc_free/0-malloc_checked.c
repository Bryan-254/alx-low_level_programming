#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: The memory size in bytes
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /*Declare pointer to hold return value of malloc*/

	ptr = malloc(b); /*Allocate memory*/

	if (ptr == NULL) /*if malloc fails*/
	{
		exit(98);
	}
	else
	{
		return (ptr); /*Return pointer to newly allocated space*/
	}
}
