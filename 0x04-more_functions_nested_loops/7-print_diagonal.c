#include "main.h"
/**
 * print_diagonal - Function used to execute.
 * @n: Parameter to be checked.
 *
 * Return: 0 Always.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int d = 0;
		int e = 0;

		for (d = 0; d < n; d++)
		{
			for (e = 0; e < n; e++)
			{
				if (e == d)
					_putchar('\\');
				else if (e < d)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
