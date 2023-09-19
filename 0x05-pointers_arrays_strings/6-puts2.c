#include "main.h"
#include <stdio.h>
/**
 * puts2 - Function printing every other character of a string.
 * @str: Parameter of char data type.
 *
 * Return: 0 Always
 */
void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
		if (d % 2 == 0)
			_putchar(str[d]);
	}
	_putchar('\n');
}
