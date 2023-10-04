#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input
 * @height: input
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x, *y;

	for (x = 0; x < height; x++)
	{
		y = grid[x];
		free(y);
	}
	free(grid);
}
