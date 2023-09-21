#include "main.h"
/**
 * reverse_array - Function reversing an array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int d;
	int rev_Array;

	for (d = 0; d < n / 2; d++)
	{
		rev_Array = a[d];
		a[d] = a[n - d - 1];
		a[n - d - 1] = rev_Array;
	}
}
