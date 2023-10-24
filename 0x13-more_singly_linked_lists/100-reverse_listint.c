#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head node pointer to a linked list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_List, *cur_Node;

	rev_List = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		cur_Node = (*head)->next;
		(*head)->next = rev_List;
		rev_List = *head;
		*head = cur_Node;
	}
	*head = rev_List;
	return (rev_List);
}
