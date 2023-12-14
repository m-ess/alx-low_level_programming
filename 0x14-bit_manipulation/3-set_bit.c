#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: input
 * @index: input
 *
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
