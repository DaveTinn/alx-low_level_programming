#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char upperLower;
	
	for (upperLower = 'a'; upperLower <= 'z'; upperLower++)
	putchar(upperLower);
	for (upperLower = 'A'; upperLower <= 'Z'; upperLower++)
	putchar(upperLower);
	putchar('\n');
	return (0);
}
