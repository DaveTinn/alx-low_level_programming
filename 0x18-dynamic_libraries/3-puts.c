#include "main.h"
#include <stdio.h>
/**
 * _puts - Function used to print a string.
 * @str: Parameter required.
 *
 * Return: 0 Always.
 */
void _puts(char *str)
{
	int s = 0;

	for (s = 0; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
