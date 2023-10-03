#include "main.h"
/**
 * *_strncat - Function used to concatenate.
 * @dest: Destination pointing to a char data type.
 * @src: Destination pointing to a char data type.
 * @n: Parameter with an integer data type.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int _dest = strlen(dest);

	for (d = 0 ; d < n && *src != '\0'; d++)
	{
		dest[_dest + d] = *src;
		src++;
	}
	dest[_dest + d] = '\0';
	return (dest);
}
