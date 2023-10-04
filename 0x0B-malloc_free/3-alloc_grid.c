#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int a, b, c, *y;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = (int **)malloc(height * sizeof(int *));
	if (x == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		*(x + a) = (int *)malloc(width * sizeof(int));
		if (*(x + a) == NULL)
		{
			for (a = 0; a < height; a++)
			{
				y = x[a];
				free(y);
			}
			free(x);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (b = 0; b < width; b++)
		{
			x[c][b] = 0;
		}
	}
	return (x);
}


