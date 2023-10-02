#include <stdio.h>
#include "main.h"
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

	for (d = 0; d < agrc; d++)
		printf("%s\n", agrv[d]);
	return (0);
}
