#include "main.h"
/**
 * print_numbers - Function to print numbers.
 *
 * Return: 0 Always
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
	_putchar('\n');
}
