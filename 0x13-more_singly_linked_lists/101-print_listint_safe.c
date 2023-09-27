#include "lists.h"
/**
* print_listint_safe - prints a listint_t linked list.
* @head: Pointer to the head of the list.
* Return: number of nodes.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;
	int is_loop = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (current->next >= current)
		{
			is_loop = 1;
			break;
		}
		current = current->next;
	}
	if (is_loop)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		exit(98);
	}
	return (node_count);
}
