#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Fuction frees previously created 2
 * dimensional grid
 *
 * @grid: Grid to be freed 
 * @height: nHeight of grid
 *
 * Description:
 *
 * Return: None
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	/* free each row */
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	/* free row pointers */
	free(grid);
}
