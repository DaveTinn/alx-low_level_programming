#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to be copied
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *str_copy;
	int len = 0;
	int d = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	str_copy = (char *)malloc(sizeof(char) * d + 1);
	if (str_copy == NULL)
	{
		return (NULL);
	}
	for (d = 0; str[d] != '\0'; d++)
	{
		str_copy[d] = str[d];
	}
	return (str_copy);
}
