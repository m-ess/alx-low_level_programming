#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @y: input
 * Return: y
 */
char *string_toupper(char *y)
{
	int x;

	x = 0;
	while (y[x] != '\0')
	{
		if (y[x] >= 'a' && y[x] <= 'z')
			y[x] = y[x] - 32;
		x++;
	}
	return (y);
}
