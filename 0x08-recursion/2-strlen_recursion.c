#include "main.h"
/**
 * _strlen_recursion - a function that retuns the lenght ofa string
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
}
	else

		return (1 + _strlen_recursion(s + 1));
		}
}
