#include "main.h"
#include <stdio.h>
/**
 * print_rev - Function to print in reverse order.
 * @s: Parameter required.
 *
 * Return: 0 Always
 */
void print_rev(char *s)
{
	int d;
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (d = length - 1; d >= 0; d--)
		_putchar(s[d]);
	_putchar('\n');
}
