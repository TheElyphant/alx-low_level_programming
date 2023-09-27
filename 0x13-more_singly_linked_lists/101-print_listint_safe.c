#include "lists.h"
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t nodes = 0;
	int is_loop = 0;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		return (nodes);
	}
	do {
		nodes++;
		tortoise = tortoise->next;
	}
	while (tortoise != hare);
	return (nodes);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = looped_listint_len(head);
	int is_loop = (nodes > 0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (is_loop && nodes == 1)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
		nodes--;
	}
	return (looped_listint_len(head));
}
