#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer parameter to be checked.
 *
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	int d = 1;

	return (sqrt_recursive(n, d));
}
/**
 * sqrt_recursive - calculates integer square root of a number
 * @n: parameter calculated for the square root
 * @d: parameter to be tested
 * Return: -1 if there is no integer square root
 */
int sqrt_recursive(int n, int d)
{
	if (n == d * d)
	{
		return (d);
	}
	else if (d < n)
	{
		return (sqrt_recursive(n, ++d));
	}
	else
	{
		return (-1);
	}
}
