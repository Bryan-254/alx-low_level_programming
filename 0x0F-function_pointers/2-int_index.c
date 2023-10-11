#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: The array to be examined
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x; /*Declare an integer for loop iteration*/

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0 ; x < size ; x++)
	{
		if (cmp(array[x]) == 1)
			return (x);
	}
	return (-1); /*if no element satisfies comparison function*/
}

