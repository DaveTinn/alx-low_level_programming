#include "main.h"
/**
 * _memset - fills memory with constant byte.
 * @s: pointing to a char data type.
 * @b: variable of char data type.
 * @n: variable of integer data type.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
