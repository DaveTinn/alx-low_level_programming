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
		for (e = 0; e <= 9; e++)
			product  = d * e;
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (product <= 99)
			{
				_putchar(' ');
			}
			_putchar((product / 100) + '0');
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
			if (e < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
	}
}
