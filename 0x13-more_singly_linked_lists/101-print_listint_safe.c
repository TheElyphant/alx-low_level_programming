#include "lists.h"
/**
* print_listint_safe - prints a listint_t linked list.
* @head: Pointer to the head of the list.
* Return: number of nodes.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *temp;
	size_t node_count = 0;
	int is_loop = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		temp = head;

		while (temp != current)
		{
			if (temp == current->next)
			{
				is_loop = 1;
				break;
			}
			temp = temp->next;
		}
		if (is_loop)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}
	if (is_loop)
	{
		exit(98);
	}
	return (node_count);
}
