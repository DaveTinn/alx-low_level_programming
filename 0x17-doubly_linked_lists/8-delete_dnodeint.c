#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;

	del_node = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	for (; index != 0; index--)
	{
		if (del_node == NULL)
		{
			return (-1);
		del_node = del_node->next;
		}
	}
	if (del_node == *head)
	{
		*head = del_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		del_node->prev->next = del_node->next;
		if (del_node->next != NULL)
			del_node->next->prev = del_node->prev;
	}
	free(del_node);
	return (1);
}
