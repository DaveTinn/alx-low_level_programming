#include "main.h"
/**
 * set_bit -sets the value of a bit to 1 at a given index
 * @n: pointer of int type
 * @index: the index of the bit to be set
 *
 * Return: 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t bit_val;

	bit_val = 1;
	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	bit_val = bit_val << index;
	*n = (*n | bit_val);
	return (1);
}
