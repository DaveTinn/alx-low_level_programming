#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to a singly linked list
 * @index: index of the node
 *
 * Return: 0 Always
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	if (head == NULL)
	{
		return (NULL);
	}
	for (nth = 0; nth < index; nth++)
	{
		head = head->next;
	}
	return (head);
}
