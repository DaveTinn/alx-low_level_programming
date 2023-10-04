#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character for storing the array
 * Return: pointer to array or NULL if a failure occurs
 */

char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < size; d++)
	{
		arr[d] = c;
	}
	return (arr);
}
