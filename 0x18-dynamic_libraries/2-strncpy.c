#include "main.h"
/**
 * _strncpy - Function to used for copying a string.
 * @dest: Destination of the string to be copied.
 * @src: Source where the string is being copied.
 * @n: Parameter which is an integer data type.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[d] = src[d];
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
