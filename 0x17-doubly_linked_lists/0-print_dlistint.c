#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to a list
 *
 * Return: 0 Always
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes;

	num_of_nodes = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}

