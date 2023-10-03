#include "main.h"
#include <stdio.h>
/**
 *  *_strcpy - Function copying a string pointed.
 * @dest: Destination parameter pointing to a char data type
 * @src: Source parameter pointing to a char data type.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';
	return (dest);
}
