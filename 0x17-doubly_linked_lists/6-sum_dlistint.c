#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) in a linked list
 * @head: pointer to a linked list
 *
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of_data;

	sum_of_data = 0;
	while (head != NULL)
	{
		sum_of_data += head->n;
		head = head->next;
	}
	return (sum_of_data);
}
