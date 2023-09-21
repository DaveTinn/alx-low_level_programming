#include "main.h"
/**
 * cap_string - Function capitalizing the words of a string.
 * @str: array of string.
 *
 * Return: str.
 */
char *cap_string(char *str)
{
	int d;

	while (str[d])
	{
		while (!(str[d] >= 'a' && str[d] <= 'z'))
			d++;
		if (str[d - 1] == ' ' ||
		str[d - 1] == '\t' ||
		str[d - 1] == '\n' ||
		str[d - 1] == ',' ||						str[d - 1] == ';' ||
		str[d - 1] == '!' ||
		str[d - 1] == '?' ||
		str[d - 1] == '"' ||
		str[d - 1] == '(' ||
		str[d - 1] == ')' ||
		str[d - 1] == '{' ||
		str[d - 1] == '}' ||
		d == 0)
			str[d] = str[d] - ('a' - 'A');
		d++;
	}
	return (str);
}
