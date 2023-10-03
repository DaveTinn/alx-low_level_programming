#include "main.h"
/**
 * _memcpy - copying memory area
 * @dest: pointing to memory destination
 * @src: pointing to memory source
 * @n: number of bytes(integer data type)
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
