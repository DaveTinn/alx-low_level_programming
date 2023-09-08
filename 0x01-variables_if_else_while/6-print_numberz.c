#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; ++d)
		putchar('0' + d);
	putchar('\n');
	return (0);
}
