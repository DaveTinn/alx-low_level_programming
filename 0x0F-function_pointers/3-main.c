#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to check the code
 * @argc: unused argument count
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number_1;
	int number_2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number_1 = atoi(argv[1]);
	op = argv[2];
	number_2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && number_2 == 0) || (*op == '%' && number_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op) (number_1, number_2));
	return (0);
}
