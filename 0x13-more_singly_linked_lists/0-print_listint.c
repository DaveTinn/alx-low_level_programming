#include "lists.h"
/**
 * print_listint - prints all element of the list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
