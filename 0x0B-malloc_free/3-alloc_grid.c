#include "main.h"

/**
 * alloc_grid - Function that returns pointer to a 2D array of integers
 * @width: The number of columns
 * @height: The number of rows
 * Return: The pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int x, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (x = 0 ; x < height ; x++)
	{
		output[x] = malloc(sizeof(int) * width);

		if (output[x] == NULL)
		{
			free(output);
			for (b = 0 ; b <= height ; b++)
				free(output[b]);
			return (NULL);
		}
		for (b = 0 ; b < height ; b++)
			output[x][b] = 0;
	}
	return (output);
}
