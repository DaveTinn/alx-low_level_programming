#include "lists.h"
/**
 * add_nodeint - adds new node to the beginning of a list
 * @head: head of the list
 * @n: integer
 * Return: address of the new element or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
