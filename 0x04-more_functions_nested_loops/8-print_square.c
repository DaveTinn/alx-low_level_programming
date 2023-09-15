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
	{
		_putchar('\n');
	}
	else
	{
		int d = 0;
		int e = 0;

		for (d = 0; d < size; d++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar('#');
		}
		_putchar('\n');
	}
}
