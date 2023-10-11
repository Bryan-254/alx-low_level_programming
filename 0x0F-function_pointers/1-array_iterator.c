#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x; /*This is a variable for the looping*/

	if (array == NULL || action == NULL)
		return;
	for (x = 0 ; x < size ; x++) /*Loop over the entire array elements*/
		action(array[x]);
}
