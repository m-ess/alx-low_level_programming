#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: input
 * @s2: input
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *x = NULL;
	unsigned int i, y, m, n;

	n = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y] != '\0'; y++)
		;
	for (m = 0; s2[m] != '\0'; m++)
		;
	x = (char *)malloc((y + m + 1) * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];
	for (; s2[n] != '\0'; i++)
	{
		x[i] = s2[n];
		n++;
	}
	return (x);
}

