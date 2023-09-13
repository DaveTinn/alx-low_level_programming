#include "main.h"
#include <stdio.h>
/**
 * times_table- Function printing multiplication table.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int d;
	int e;
	int product;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0');
		for (e = 1; e <= 9; e++)
		{
			_putchar(',');
			_putchar(' ');
			product = d * e
			if (product <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
