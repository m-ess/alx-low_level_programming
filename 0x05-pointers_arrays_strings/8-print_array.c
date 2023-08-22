#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an integers
 * @a: input
 * @n: input
 * return: nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
