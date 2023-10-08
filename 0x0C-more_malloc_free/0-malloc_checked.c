#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
