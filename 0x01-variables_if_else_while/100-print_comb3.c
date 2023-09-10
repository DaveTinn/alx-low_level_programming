#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 < 99; d1++)
	{
		for (d2 = 0 + d1; d2 < 99; d2++)
		{
			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');
			if (d1 + d2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
