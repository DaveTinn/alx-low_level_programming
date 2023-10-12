#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of arguments passed
 *
 * Return: Nothing
 */
void print_char(va_list print)
{
	printf("%c", va_arg(print, int);
}

void print_int(va_list print)
{
printf("%d", va_arg(print, int);
}
void print_float(va_list print)
{
}
void print_str(va_list print)
{
}
void print_all(const char * const format, ...)
{
}
