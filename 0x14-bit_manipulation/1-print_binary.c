#include "main.h"
/**
 * print_binary_repre - prints binary representation of a number
 * @bit: parameter of int type
 *
 * Return: 0 Always
 */
void print_binary_repre(unsigned long int bit)
{
	if (bit > 1)
	{
		print_binary_repre(bit >> 1);
	}
	_putchar((bit & 1) + '0');
}
/**
 * print_binary - prints binary representation of a number
 * @n: parameter of int type
 *
 * Return: 0 Always
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary_repre(n);
	}
}
