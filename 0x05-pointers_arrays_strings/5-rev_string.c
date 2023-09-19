#include "main.h"
#include <stdio.h>
/**
 * rev_string - Function that reverses string.
 * @s: Parameter required.
 *
 * Return: 0 Always.
 */
void rev_string(char *s)
{
	int d;
	int length = 0;

	for (d = 0; s[d] != '\0'; d++)
		length++;
	for (d = 0; d < length / 2; d++)
	{
		char swap;

		swap = s[d];
		s[d] = s[length - d - 1];
		s[length - d - 1] = swap;
	}
}
