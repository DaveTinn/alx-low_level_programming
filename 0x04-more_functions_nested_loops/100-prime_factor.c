#include <stdio.h>
#include <math.h>
/**
 * main - Function to be used to print largest prime factor.
 *
 * Return: 0 Always.
 */
int main(void)
{
	long int d;
	long int max;
	long int e;

	d = 612852475143;
	max = -1;

	while (d % 2 == 0)
	{
		max = 2;
		d /= 2;
	}
	for (e = 3; e <= sqrt(d); e = e + 2)
	{
		while (d % e == 0)
		{
			max = e;
			d = d / e;
		}
	}

	if (d > 2)
		max = d;

	printf("%ld\n", max);
	return (0);
}
