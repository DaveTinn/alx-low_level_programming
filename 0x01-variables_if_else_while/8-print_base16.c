#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int base_16;
	char d;

	for (base_16 = 0; base_16 < 10; base_16++)
		putchar('0' + base_16);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
