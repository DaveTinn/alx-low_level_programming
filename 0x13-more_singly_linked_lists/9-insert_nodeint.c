#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node pointer to a linked list
 * @idx: index of the list
 * @n: integer
 *
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *oldNode;
	unsigned int del;

	oldNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (del = 0; del < idx - 1 && oldNode != NULL; del++)
	{
		oldNode = oldNode->next;
	}
	if (oldNode != NULL)
	{
		newNode->next = oldNode->next;
		oldNode->next = newNode;
		return (newNode);
	}
	return (NULL);
}
