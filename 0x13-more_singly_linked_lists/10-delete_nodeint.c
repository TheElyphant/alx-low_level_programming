#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index
* of a listint_t linked list.
* @head: Pointer to a pointer to the head of a list.
* @index: index of the node that should be deleted.
* Return: 1 if success and -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	if (current->next == NULL)
		return (-1);

	temp = current->next;

	current->next = temp->next;
	free(temp);
	return (1);
}
