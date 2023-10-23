#include "lists.h"
/**
 * free_listint - frees a list.
 * @head: pointer to a singly linked list
 *
 * Return: 0 Always
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
