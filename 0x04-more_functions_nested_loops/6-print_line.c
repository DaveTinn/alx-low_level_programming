#include "main.h"
/**
 * print_line - Function drawing a straight line.
 *
 * @n: Parameter used
 * Return: 0 Always
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int d;

		for (d = 1; d <= n; d++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
