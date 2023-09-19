#include "main.h"
#include <stdio.h>
/**
 * print_array - Function required to print elements of an array.
 * @a: Parameter of integer data type.
 * @n: Parameter of integer data type.
 *
 * Return: 0 Always.
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d, ", a[d]);
	}
	printf("\n");
}
