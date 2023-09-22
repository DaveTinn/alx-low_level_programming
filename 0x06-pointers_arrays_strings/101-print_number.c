#include "main.h"
#include <stdio.h>
/**
 * print_number - Function printing an integer.
 * @n: pararmeter of integer data type.
 *
 * Return: 0 Always.
 */
void print_number(int n)
{
	unsigned int d;

	d = n;
	if (n < 0)
	{
		_putchar('-');
		d = -n;
	}
	if (d / 10 != 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
