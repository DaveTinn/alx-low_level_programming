#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * @n: Parameter to be checked. 
 * Return: 1 if n is greater than 0, else if 0, else -1
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		_putchar("+");
	else if (n == 0)
		return (0)
		_putchar("0");
	else
		return (-1);
		_putchar("-");
}
