#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head: pointer to a singly linked list
 *
 * Return: 0 Always
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		list = *head;
		*head = list->next;
		free(list);
	}
}
