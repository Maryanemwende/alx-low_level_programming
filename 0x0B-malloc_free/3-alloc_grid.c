#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 *
 * @width: columns of 2D array
 * @height: rows of 2D array
 * Return: NULL on failure
 *	If width or height is 0 or negative, return NULL
 *	pointer to a 2D array of ints
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;

	int **twoDarr;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDarr = malloc(sizeof(int *) * height);

	if (twoDarr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twoDarr[x] = malloc(sizeof(int) * width);

		if (twoDarr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(twoDarr[y]);

			free(twoDarr);
			return (NULL);
		}
	}
	/*nested loop to initialize elements to 0*/
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			twoDarr[x][y] = 0;
		}
	}
	return (twoDarr);
}
