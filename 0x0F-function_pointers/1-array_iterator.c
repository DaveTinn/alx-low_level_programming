#include <stdio.h>
/**
 * array_iterator - executes function given as parameter on each element of array
 * @array: pointer to an array of integers
 * @size: size of array
 * @action: pointer to the function to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
