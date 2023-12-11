#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - Function to convert a string to an integer.
 * @s: Parameter pointing to a char data type'
 *
 * Return: 0 Always.
 */
int _atoi(char *s)
{
	int d = 0;
	int g = 0;
	int res = 0;
	int m = 0;
	int sign = 1;

	while (s[res] != '\0')
	{
		res++;
	}

	while (d < res)
	{
		if (s[d] == '-')
		{
			sign = -1;
		}
		else if (s[d] >= '0' && s[d] <= '9')
		{
			g = g * 10 + (s[d] - '0') * sign;
			m = 1;
		}
		else if (m == 1)
		{
			break;
		}
		d++;
	}

	if (m == 0)
		return 0;

	return g;
}
