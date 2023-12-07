#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given point
 * @h: pointer to the head of a linked list
 * @idx: index of the linked list
 * @n: value to be stored in the new node
 * Return: NULL, if it is not possible to add the new node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	current_node = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next->prev = new_node;
	current_node->next = new_node;
	return (new_node);
}
