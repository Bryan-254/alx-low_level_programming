#include "main.h"
#include <string.h>

/**
 * array_range - Function that creates an array of integers
 * @min: The minimum point
 * @max: The maximum point
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *m; /*This pointer holds return value of malloc*/
	int x, size;

	if (min > max) /*Check if min is greater than max*/
	{
		return (NULL);
	}

	/*Calculate size of array based on range*/
	size = max - min + 1;

	/*Allocate memory for the array*/
	m = malloc(sizeof(int) * size);

	if (m == NULL) /*If malloc fails*/
	{
		return (NULL);
	}

	/*Populate the array with integers in the specified range*/
	for (x = 0 ; min <= max ; x++)
	{
		m[x] = min++;
	}
	return (m);
}
