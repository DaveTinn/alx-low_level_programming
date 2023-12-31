#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: pointing to a string
 *
 * Return: 0 Always
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
