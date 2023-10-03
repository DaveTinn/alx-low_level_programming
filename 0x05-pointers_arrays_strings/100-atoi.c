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
	int e = 0;
	int value = 1;
	int sign = 0;

	while (s[d])
	{
		if (s[d] == '-')
		{
			value *= -1;
		}
		else if (s[d] >= '0' && s[d] <= '9')
		{
			sign = 1;
			e = (e * 10) + (s[d] - '0');
		}
		else if (sign == 1)
		{
			break;
		}
		d++;
	}
	if (sign == 0)
	{
		return (0);
	}
	e *= value;
	return (e);
}
