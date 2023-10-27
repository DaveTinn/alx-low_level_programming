#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero
 * @n: pointer to an int type
 * @index: the index starting from zero of the bit
 *
 * Return: 1 if it works else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t bit_val;

	bit_val = 1;
	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	bit_val = bit_val << index;
	*n = *n & ~bit_val;
	return (1);
}
