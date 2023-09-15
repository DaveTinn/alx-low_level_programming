#include "main.h"
/**
 * more_numbers - Function printing 10 times the numbers 0 to 14
 *
 * Return: 0 Always
 */
void more_numbers(void)
{
	int d = 0;
	int e;

	for (d = 1; d <= 10; d++)
	{
		for (e = 0; e <= 14, e++)
		{
			if (e >= 10)
			_putchar('1)
			_putchar(e % 10 + '0')
		}
		_putchar('\n');
	}
}
