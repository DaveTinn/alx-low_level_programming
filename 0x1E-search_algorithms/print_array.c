#include "search_algos.h"
/**
 * print_array - Prints the array being search everytime it changes.
 * @array: The array to be printed
 * @size: Size of the array.
 *
 * Return: 0 Always.\
 */
void print_array(const int *array, size_t size)
{
	size_t itr;

	itr = 0;
	printf("Searching in array: ");
	while (itr < size)
	{
		printf("%d", array[itr]);
		if (itr < size - 1)
		{
			printf(", ");
		}
		++itr;
	}
	printf("\n");
}
