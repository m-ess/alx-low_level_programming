#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;
	return (x);
}
