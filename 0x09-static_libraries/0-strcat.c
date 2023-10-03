#include "main.h"
/**
 * *_strcat - Function used to append.
 * @dest: Parameter serving as a pointer.
 * @src: Parameter serving as a pointer.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int _dest = 0;
	int _src = 0;

	for (d = 0; dest[d] != '\0'; d++)
		_dest++;
	for (d = 0; src[d] != '\0'; d++)
		_src++;
	for (d = 0; d <= _src; d++)
		dest[_dest + d] = src[d];
	return (dest);
}
