#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to a char data type
 * @s2: pointer to a char data type
 * @n: Parameter of integer dta type to be checked
 * Return: NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;
	concat = malloc(sizeof(char) * len_s1 + n + 1);
	if (concat == NULL)
		return (NULL);
	if (n >= len_s2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			concat[len_s1 + i] = s2[i];
		concat[len_s1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			concat[i] = s1[i];
		for (i = 0; i < n; i++)
			concat[len_s1 + i] = s2[i];
		concat[len_s1 + i] = '\0';
	}
	return (concat);
}
