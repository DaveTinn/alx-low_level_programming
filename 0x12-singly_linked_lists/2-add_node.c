#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node
 * @head: pointer to another pointer to a node starting the list
 * @str: string
 * Return: address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
