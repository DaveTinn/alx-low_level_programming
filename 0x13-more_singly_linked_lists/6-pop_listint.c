#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: pointer to a singly linked list
 *
 * Return: 0 Always
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data_n;

	if (*head == NULL)
	{
		return (0);
	}
	data_n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (data_n);
}
