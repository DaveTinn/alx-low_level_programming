#include <stdio.h>
/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: function pointer with one argument
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
