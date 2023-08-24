#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, x, y;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
