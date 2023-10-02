#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - prints all arguments received
 * @agrc: number of arguments passed
 * @agrv: array of strings
 *
 * Return: 0 Always
 */
int main(int agrc, char *agrv[])
{
	int d;
	int e;
	int sum = 0;

	for (d = 1; d < agrc; d++)
	{
		for (e = 0; agrv[d][e] != '\0'; e++)
		{
			if (!isdigit(agrv[d][e]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(agrv[d]);
	}
	printf("%d\n", sum);
	return (0);
}
