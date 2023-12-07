#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to a linked list
 *
 * Return: 0 Always
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
