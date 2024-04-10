#include "search_algos.h"

/**
 * print_array - Prints the array being search everytime it changes.
 * @array: The array to be printed
 * @size: Size of the array.
 * @value: Value to be printed
 *
 * Return: Nothing
 */
void print_array(int *array, size_t size, size_t value)
{
	size_t itr = 0;

	printf("Searching in array: ");
	for (itr = size; itr <= value; itr++)
	{
		if (itr != value)
		{
			printf("%d, ", array[itr]);
		}
		else
		{
			printf("%d", array[itr]);
		}
	}
	printf("\n");
}

/**
 * binary_search - Function searching for a value in a sorted array.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
