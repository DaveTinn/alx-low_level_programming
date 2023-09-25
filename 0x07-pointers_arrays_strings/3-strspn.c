#include "main.h"
/**
 * _strspn - function getting the length of a prefix substring
 * @s: pointing to a char data type
 * @accept: pointing to a char data type
 *
 * Return: 0 Always.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int e;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[len] == accept[e])
			{
				break;
			}
		}
		if (accept[e] == '\0')
		{
			return (len);
		}
	}
	return (len);
}
