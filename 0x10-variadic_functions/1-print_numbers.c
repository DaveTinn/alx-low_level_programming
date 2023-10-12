#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints number
 * @separator: string to be printed
 * @n: number of integers
 *
 * Return: 0 Always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int d;

	if (separator == NULL)
		return;
	va_start(numbers, n);
	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(numbers, int));

		if (d < n - 1)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
