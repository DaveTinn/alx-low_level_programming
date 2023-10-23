#include "lists.h"
/**
 * listint_len - lists number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}
