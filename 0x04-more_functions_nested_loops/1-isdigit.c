#include "main.h"
/**
 * _isdigit - Function checking the code for digit.
 * @c: Character used to check.
 * Return: Always 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
