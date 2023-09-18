#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function used to swap two integers.
 * @a: Paremeter to be swapped.
 * @b: Parameter to be swapped.
 *
 * Return: 0 Always.
 */
void swap_int(int *a, int *b)
{
	int swap;


	swap = *a;
	*a = *b;
	*b = swap;
}
