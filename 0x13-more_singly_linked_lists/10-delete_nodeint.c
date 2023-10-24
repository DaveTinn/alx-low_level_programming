#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head node pointing to a linked list
 * @index: index of the node
 *
 * Return: 1 if success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode, *preNode; 
	unsigned int del;

	delNode = *head;
	if (delNode == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = delNode->next;
		free(delNode);
		return (1);
	}

	preNode = *head;

	for (del = 0; del < index - 1 && delNode != NULL; del++)
	{
		preNode = delNode;
		delNode = delNode->next;
	}

	if (delNode == NULL)
	{
		return (-1);
	}

	preNode->next = delNode->next;
	free(delNode);
	return (1);
}
