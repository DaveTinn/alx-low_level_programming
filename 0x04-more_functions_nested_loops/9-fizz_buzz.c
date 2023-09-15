#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3 == 0) && (d % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (d % 3 == 0)
			printf("%s", "Fizz");
		else if (d % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", d);
		if (d != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
