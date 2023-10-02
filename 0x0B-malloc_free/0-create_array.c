#include "main.h"

/**
 * create_array - Function that creates an array of chars
 * @size: The size of array
 * @c: The character
 * Return: A pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0 ; x < size ; x++)
		arr[x] = c;
	return (arr);
}
