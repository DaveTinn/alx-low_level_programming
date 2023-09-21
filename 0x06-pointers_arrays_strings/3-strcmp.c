#include "main.h"
/**
 * _strcmp - Function used to compare two strings.
 * @s1: Parameter used as a pointer to string 1.
 * @s2: Paramater used as a pointer to string 2.
 *
 * Return: 0 Always.
 */
int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] != '\0' || s2[d] != '\0'; d++)
	{
		if (s1[d] != s2[d])
		{
			if (s1[d] < s2[d])
				return (s1[d] - s2[d]);
			else if (s2[d] < s1[d])
				return (s1[d] - s2[d]);
		}
	}
	return (0);
}
