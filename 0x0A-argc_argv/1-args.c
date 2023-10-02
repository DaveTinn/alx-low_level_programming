#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments
 * @agrc: number of arguments passed
 * @agrv: array of strings
 *
 * Return: 0 Always
 */
int main(int agrc, char *agrv[]__attribute__((unused)))
{
	if (agrc > 0)
		printf("%d\n", agrc - 1);
	return (0);
}
