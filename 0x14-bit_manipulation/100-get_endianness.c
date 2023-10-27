#include "main.h"
/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big endian, else 1
 */
int get_endianness(void)
{
	size_t endian;
	char *size;

	endian = 1;
	size = (char *) &endian;
	if (*size == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
