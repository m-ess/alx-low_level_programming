#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: input
 * @b: input
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp  = *a;
	*a = *b;
	*b = swp;
}
