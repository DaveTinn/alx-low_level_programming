#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments received
 * @agrc: number of arguments passed
 * @agrv: array of strings
 *
 * Return: 0 Always
 */
int main(int agrc, char *agrv[])
{
	if (agrc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(agrv[1]) * atoi(agrv[2]));
	return (0);
}
