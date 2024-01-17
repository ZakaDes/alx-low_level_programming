#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * alloc_grid function
 * @grid: the two dimensional grid
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);


	free(grid);
}
