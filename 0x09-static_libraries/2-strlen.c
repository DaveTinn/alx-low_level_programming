#include "main.h"
#include <stdio.h>
/**
 * _strlen - Function to check for string.
 * @s: Parameter to be used.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
