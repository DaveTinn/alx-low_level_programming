#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: Parameter to be checked.
 *
 * Return: NULL if failure occurs
 */
void *malloc_checked(unsigned int b)
{
	char *d;

	d = malloc(b);
	if (d == NULL)
	{
		exit(98);
	}
	else
	{
		return (d);
	}
}
