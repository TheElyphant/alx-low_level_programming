#include "lists.h"
/**
* get_nodeint_at_index -  returns the nth node of a listint_t linked list.
* @head: Pointer to a pointer to head of list.
* @index: Index of node starting at 0.
* Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}
	return (NULL);
}
