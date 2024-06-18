#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns pointer to 2 dimensional
 * array of integers
 *
 * @width: Width of grid
 * @height: Height of grid
 *
 * Description: Each grid element initialized to 0
 *
 * Return: NULL on failure, otherwise returns pointer to
 * allocated grid
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	/* check for invalid input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* malloc row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* initialize and malloc each row */
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			/* free rowa on failure */
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}

		/* initialize elements */
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
