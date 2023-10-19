#include "lists.h"
/**
 * add_node_end - adds a new node to the end of the list
 * @head: pointer to another pointer to a node starting the list
 * @str: string of constant char type
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *brief;
	size_t d;
	size_t node = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	for (d = 0; str[d] != '\0'; d++)
	{
		node++;
	}
	newNode->len = node;
	newNode->next = NULL;
	brief = *head;
	if (brief == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (brief->next != NULL)
		{
			brief = brief->next;
		}
		brief->next = newNode;
	}
	return (newNode);
}
