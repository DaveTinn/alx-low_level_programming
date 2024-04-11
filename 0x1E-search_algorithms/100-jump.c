#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array of integers.
 * @array: Pointeer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;

		if (prev >= size)
			break;
	}
	prev -= step;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
	while (array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
		if (prev == size)
			return (-1);
	}
	return (-1);
}
