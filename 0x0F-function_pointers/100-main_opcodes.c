#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to check code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int num_Bytes;
	int d;
	unsigned char opcode;
	int (*hexa_lower)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_Bytes = atoi(argv[1]);
	if (num_Bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (d = 0; d < num_Bytes; d++)
	{
		opcode = *(unsigned char *)hexa_lower;
		printf("%.2x", opcode);
		if (d == num_Bytes - 1)
			continue;
		printf(" ");
		hexa_lower++;
	}
	printf("\n");
	return (0);
}
