#include "main.h"
/**
 * print_number - Function to check and print an integer.
 * @n: Parameter to be used.
 *
 * Return: 0 Always
 */
void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		d = -n;
		_putchar('-');
	}
	else
	{
		d = n;
	}

	if (d / 10)
	{
		print_number(d / 10);
	}

	_putchar((d % 10) + '0');
}
