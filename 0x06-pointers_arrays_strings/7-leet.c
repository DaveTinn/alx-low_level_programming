#include "main.h"
/**
 * leet - Function encoding a string.
 * @str: strings to be checked
 *
 * Return: n
 */
char *leet(char *str)
{
	int d;
	int e;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (d = 0; str[d] != '\0'; d++)
	{
		for (e = 0; arr1[e] != '\0'; e++)
		{
			if (str[d] == arr1[e])
			{
				str[d] = arr2[e];
			}
		}
	}
	return (str);
}
