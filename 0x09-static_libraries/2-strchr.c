#include "main.h"
/**
 * _strchr - to locate a character in a string.
 * @s: string pointing to a char data type.
 * @c: character of char data type.
 *
 * Return: s or NULL.
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
		{
			return (&s[d]);
		}
	}
	return (0);
}
