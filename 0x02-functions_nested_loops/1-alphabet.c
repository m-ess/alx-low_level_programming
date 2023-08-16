#include "main,h"
/**
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 * return: always o (success)
 */
void print_alphabet(void)
{
	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
		_putchar('\n');
	}
}

