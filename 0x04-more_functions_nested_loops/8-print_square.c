#include "main.h"
/**
 * print_square - Function to be used.
 * @size: Parameter to be checked.
 *
 * Return: 0 Always
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int d;
		int e;

		for (d = 1; d <= size; d++)
		{
			for (e = 1; e <= size; e++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
