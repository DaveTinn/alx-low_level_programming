#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call = calloc(nmemb, size);
	if (call == NULL)
		return (NULL);
	else
		return (call);
}
