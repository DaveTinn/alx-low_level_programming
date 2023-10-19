#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: pointer to a list
 *
 * Return: free
 */
void free_list(list_t *head)
{
	list_t *brief;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		brief = head->next;
		free(head->str);
		free(head);
		head = brief;
	}
	free(head->str);
	free(head);
}
