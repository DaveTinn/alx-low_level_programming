#include "main.h"
#include <stdio.h>
/**
 * rot13 - Function used to encode.
 * @str: Parameter containing strings
 *
 * Return: str.
 */
char *rot13(char *str)
{
	int d;
	int e;
	char _arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijlmnopqrstuvwxyz";
	char _arrRot[] = "NOPQRSTUVWXYZMABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (d = 0; str[d] != '\0'; d++)
	{
		for (e = 0; e < 52; e++)
		{
			if (str[d] == _arr[e])
			{
				str[d] = _arrRot[e];
				break;
			}
		}
	}
	return (str);
}
