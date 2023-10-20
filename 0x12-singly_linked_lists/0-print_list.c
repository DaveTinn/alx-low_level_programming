#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: head pointing to a list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		element++;
		h = h->next;
	}
	return (element);
}
