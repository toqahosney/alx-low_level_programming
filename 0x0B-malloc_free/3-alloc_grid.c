#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D grid
 * of integers and initializes it to 0.
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 *
 * Return: If allocation is successful,
 * a pointer to the grid. If it fails, NULL.
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			/*Free previously allocated memory*/
			for (j = 0; j < i; j++)
				free(tab[j]);
			free(tab);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}

	return (tab);
}
