#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to checked.
 *
 * Return: -1
 */
int _sqrt_recursion(int n) 
{
	int sqrt_recursive(int n, int d);

	int d = 1;
	return sqrt_recursive(n, d);
}

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
