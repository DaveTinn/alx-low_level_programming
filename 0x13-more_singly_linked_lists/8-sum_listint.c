#include "lists.h"
/**
 * sum_listint - sums all the data of a linked list
 * @head: head node to a linked list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum_List = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum_List += head->n;
		head = head->next;
	}
	return (sum_List);
}
