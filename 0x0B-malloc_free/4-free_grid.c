#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *
 * @grid: 2D array
 * @height: row of 2D array
 */
void free_grid(int **grid, int height)
{
	int indx;

	for (indx = 0; indx < height; indx++)
	{
		free(grid[indx]);
	}
	free(grid);
}
