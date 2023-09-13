#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: 1 if lowercase, else 0.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
