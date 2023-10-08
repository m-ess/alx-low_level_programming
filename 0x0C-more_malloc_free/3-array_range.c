#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *x;
	int i, j = 0;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(*x) * ((max - min) + 1));
	if (x != NULL)
	{
		for (i = min; i <= max; i++)
		{
			x[j] = i;
			j++;
		}
		return (x);
	}
	else
		return (NULL);

}
