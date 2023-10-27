#include "main.h"
/**
 * flip_bits - function to flib bits
 * @n: parameter of int type
 * @m: parameter of int type
 * 
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t num_of_bits;
	size_t bits_flip;

	num_of_bits = n ^ m;
	bits_flip = 0;
	while (num_of_bits > 0)
	{
		bits_flip = bits_flip + (num_of_bits & 1);
		num_of_bits >>= 1;
	}
	return (bits_flip);
}
