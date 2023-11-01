#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d previously created by alloc_grid function
 * @grid: The 2D grid to be freed
 * @height: The height of the grid
 *
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
