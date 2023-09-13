#include "main.h"
/**
 * jack_bauer- Function that prints every minute of the day.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int d = 0;
	int e;

	while (d < 24)
	{
		e = 0;
		while (e < 60)
		{
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
		}
		_putchar(':');
		_putchar((d / 10) + '0');
		_putchar((d / 10) + '0');
	}
}
