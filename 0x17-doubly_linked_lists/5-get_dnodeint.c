#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to a linked list
 * @index: index of the node, starting from 0
 *
 * Return: NULL, if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int itr;

	itr = 0;
	while (head != NULL)
	{
		if (itr == index)
			return (head);
		head = head->next;
		itr++;
	}
	return (NULL);
}
