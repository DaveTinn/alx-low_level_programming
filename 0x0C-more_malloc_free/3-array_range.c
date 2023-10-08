#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int lim;
	int d;
	int *range;

	if (min > max)
	{
		return (NULL);
	}
	lim =  max - min + 1;
	range = malloc(sizeof(int) * lim);
	if (range == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < lim; d++)
	{
		range[d] = min + d;
	}
	return (range);
}
