#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid
 * @grid: input pointer to grid
 * @height: The array height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
