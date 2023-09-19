#include "main.h"
#include <stdio.h>
/**
 * puts_half - Function to print second half of the string.
 * @str: Parameter of char data type.
 *
 * Return: 0 Always.
 */
void puts_half(char *str)
{
	int d;
	int length = 0;

	for (d = 0; str[d] != '\0'; d++)
		length++;
	{
		int n = (length - 1) / 2;

		for (d = n + 1; str[d] != '\0'; d++)
			_putchar(str[d]);
	}
	_putchar('\n');
}
