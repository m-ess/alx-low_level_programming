#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * and which contains a copy of the string given as a parameter.
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	int size = 0;
	char *y;
	int x;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	y = (char *)malloc((size + 1) * sizeof(char));
	if (y == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		y[x] = str[x];
	}
	y[size] = '\0';

	return (y);
}
