#include "main.h"
/**
 * is_prime_helper - returns 1 if the integer is a prime number
 * @n: input
 * @x: input
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int x)
{
	if (n <= 1)
		return (0);
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (is_prime_helper(n, x - 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: input
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}
