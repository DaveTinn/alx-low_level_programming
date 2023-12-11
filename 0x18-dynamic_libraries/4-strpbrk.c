#include "main.h"
/**
 * _strpbrk - function searching a string for set of bytes.
 * @s: pointing to a string of char data type.
 * @accept: string to be searched.
 *
 * Return: s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int d;
	int e;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[d] == accept[e])
			{
				return (&s[d]);
			}
		}
	}
	return (0);
}
