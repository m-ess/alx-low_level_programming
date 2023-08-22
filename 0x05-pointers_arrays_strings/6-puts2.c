#include "main.h"
/**
 * puts2 - function that prints half of a string
 * followed by \n
 * @str: input
 */
void puts2(char *str)
{
int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	if (i % 2 != 0)
	{
		i = (i + 1) / 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
	else if (i % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
}
