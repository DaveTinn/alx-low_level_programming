#include "main.h"
/**
 * string_toupper - Function changing all lowercase of a string to uppercase.
 * @str: Array of string.
 * Return: str
 */
char *string_toupper(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
		if (str[d] >= 'a' && str[d] <= 'z')
			str[d] = str[d] - ('a' - 'A');
	}
	return (str);
}
