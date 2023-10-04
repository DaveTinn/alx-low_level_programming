#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int d;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (d = 0; s1[d] != '\0'; d++)
		len1++;
	for (d = 0; s2[d] != '\0'; d++)
		len2++;
	concat = (char *)malloc(sizeof(char) * len1 + len2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (d = 0; s1[d] != '\0'; d++)
	{
		concat[d] = s1[d];
	}
	for (d = 0; s2[d] != '\0'; d++)
	{
		concat[len1 + d] = s2[d];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
