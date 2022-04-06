#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fress a 2D grid
 * @grid: multi-dimensional array of intehers
 * @height: height of the grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
