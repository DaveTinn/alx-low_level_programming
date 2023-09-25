#include "main.h"
/**
 * _strstr - locating a substring.
 * @haystack: string to be checked:
 * @needle: substring to be found.
 *
 * Return: 0 Always
 */
char *_strstr(char *haystack, char *needle)
{
	int d;
	int e;
	int sub_string;

	for (d = 0; haystack[d] != '\0'; d++)
	{
		for (e = 0; needle[e] != '\0'; e++)
		{
			if (haystack[d] != needle[e])
			{
				if (e == 0)
				{
					sub_string = d;
				}
				d = sub_string;
				break;
			}
			if (e == 0)
			{
				sub_string = d;
			}
			d++;
		}
		if (needle[e] == '\0')
		{
			return (&haystack[sub_string]);
		}
		d = sub_string;
	}
	return (0);
}
