#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
{
	x++;
}
for (x = 1; x > 0; x--)
{
	_putchar(s[x]);
}
_putchar('\n');
}
