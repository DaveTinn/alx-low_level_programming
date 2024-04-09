#include "search_algos.h"
/**
 * linear_search- Function searching for a value in an array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t itr;

	/* To loop through each index in the array. */
	for (itr = 0; itr < size; itr++)
	{
		/* Prints the each value being checked. */
		printf("Value checked array[%lu] = [%d]\n", itr, array[itr]);

		/* Checks if the value is present in the array or the array is NULL.*/
		if (array[itr] == value || array == NULL)
		{
			return (itr);
		}
	}
	return (-1);
}
