#include "main.h"
#include <stdio.h>
/**
 * _abs- Absolute value of integer.
 * @d: Parameter to be checked.
 * Return: d or -d
 */
int _abs(int d)
{
	if (d < 0)
	{
		return (-d);
	}
	else
	{
		return (d);
	}
}
