#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: parameter to be checked
 *
 * Return: -1
 */
int factorial(int n)
{
	int d = 0;

	if (n < d)
	{
		return (-1);
	}
	else if (n == d)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
