#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: pointer to a double linked list
 *
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
