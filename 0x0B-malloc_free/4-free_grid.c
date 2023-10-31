#include "main.h"

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 * @grid: The pointer to the 2D grid to be freed.
 * @height: The number of rows in the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
