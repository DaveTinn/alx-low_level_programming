#include <stdio.h>
#include "lists.h"
/**
 * list_len - list number of elements
 * @h: head pointer to a singly link
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
