#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed.
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int d;
	char *str;

	va_start(print, n);
	for (d = 0; d < n; d++)
	{
		str = va_arg(print, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (d != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);
}
