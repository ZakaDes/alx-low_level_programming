#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to the array, or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, colu, row;

	if (width <= 0 && height <= 0)

		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

		for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (!grid[row])
		{
			for (colu = 0; colu < row; colu++)
			{
				free(grid[colu]);
			}
			free(grid);
			return (NULL);
		}
		for (colu = 0; colu < width; colu++)
			grid[row][colu] = 0;
	}
	return (grid);
}
