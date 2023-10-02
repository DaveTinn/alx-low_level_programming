#include <stdio.h>
/**
 * main - function that prints its name.
 * @agrc: contains number of arguments passed.
 * @agrv: array of strings
 *
 * Return: 0 Always
 */
int main(int agrc, char *agrv[])
{
	(void)agrc;
		printf("%s\n", agrv[0]);
	return (0);
}
