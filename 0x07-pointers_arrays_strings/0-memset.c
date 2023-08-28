#include "main.h"
/**
 * _memset - function that fills memory with a cinstant byte
 * @s: size of the memory
 * @b: address of memory
 * @n: number of bytes
 * Return: pointer to the memory ares s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}



