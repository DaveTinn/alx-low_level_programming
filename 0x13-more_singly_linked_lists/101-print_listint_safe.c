#include "lists.h"
/**
 * print_list_listint_safe - prints a linked link
 * @head: pointer to a linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes;
	const listint_t *safe_Ver;
	const listint_t *List;

	safe_Ver = head;
	List = head;
	if (head == NULL)
	{
		return (0);
	}
	while (List != NULL && List->next != NULL)
	{
		List = List->next->next;
		safe_Ver = safe_Ver->next;
		numNodes++;
		if (List == safe_Ver)
		{
			printf("-> [%p] %d\n", (void *)List, List->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)safe_Ver, safe_Ver->n);
	}
	return (numNodes);
}
