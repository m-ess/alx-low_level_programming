#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		y++;

	x = malloc(sizeof(char) * (y + 1));

	if (x == NULL)
		return (NULL);

	y = 0;

	for (b = 0; s1[b]; b++)
		x[y++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		x[y++] = s2[b];

	x[y] = '\0';

	return (x);
}
