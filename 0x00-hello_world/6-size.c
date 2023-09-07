#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char D;
	int num;
	long int num1;
	long long int num2;
	float num3;

printf("Size of a char: %zu byte(s)\n", sizeof(D));
printf("Size of an int: %zu byte(s)\n", sizeof(num));
printf("Size of a long int: %zu byte(s)\n", sizeof(num1));
printf("Size of a long long int: %zu byte(s)\n", sizeof (num2));
printf("Size of a float: %zu byte(s)", sizeof(num3));
return (0);
}
