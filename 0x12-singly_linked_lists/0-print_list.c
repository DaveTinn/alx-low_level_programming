#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: head node pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0], (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		element++;
		h = h->next;
	}
	return (element);
}
