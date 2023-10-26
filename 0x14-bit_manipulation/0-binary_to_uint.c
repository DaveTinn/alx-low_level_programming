#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con_bin = 0;
	int l;

	if (b == NULL)
	{
		return (0);
	}

	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		con_bin = con_bin * 2 + (b[l] - '0');
	}
	return (con_bin);
}
