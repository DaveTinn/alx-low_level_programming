#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointing to a string
 *
 * Return: 0 Always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
