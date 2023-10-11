#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: pointer array of integer
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]) == 1)
			return (d);
	}
	return (-1);
}
