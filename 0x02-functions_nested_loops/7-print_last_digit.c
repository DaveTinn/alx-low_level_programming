#include "main.h"
/**
 * print_last_digit - Function that prints last digits.
 * @d: Parameter to be checked.
 * Return: c
 */
int print_last_digit(int d)
{
	c = d % 10;
	if (d < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
