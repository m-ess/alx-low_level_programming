#include <stdio.h>

/**
 * main - the number of arguments passed into it
 * @argc: input
 * @argv: input
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
