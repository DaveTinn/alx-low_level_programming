#include "main.h"
/**
 * is_prime_number - checks for  prime numbers
 * @n: parameter to be tested.
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursive(n, 2));
}
/**
 * prime_recursive - calculates for prime numbers
 * @n: parameter calculated to get prime numbers
 * @d: parameter to be tested
 *
 * Return: 1 if integer is prime number otherwise 0
 */
int prime_recursive(int n, int d)
{
	if (n < 2)
	{
		return (0);
	}
	else if (d == n)
	{
		return (1);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (prime_recursive(n, d + 1));
	}
}
