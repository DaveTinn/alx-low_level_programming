#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: parameter of int type to be checked
 * @index: index of the bit starting from 0
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
