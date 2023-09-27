#include "lists.h"
/**
* print_listint_safe - prints a listint_t linked list.
* @head: Pointer to the head of the list.
* Return: number of nodes.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;
	int is_loop = 0;

	if (head == NULL)
		return (0);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			is_loop = 1;
			break;
		}
	}
	if (is_loop)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		return (node_count);
	}
	slow = head;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
		slow = slow->next;
		fast = fast->next;
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	node_count++;

	return (node_count);
}
