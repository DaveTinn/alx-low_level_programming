#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printing the sum of two diagonal of a square matrix.
 * @a: parameter for array of integers.
 * @size: size of array
 *
 * Return: 0 Always
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum1 = 0;
	int d;

	for (d = 0; d < size; d++)
	{
		sum = sum + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		sum1 = sum1 + a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
