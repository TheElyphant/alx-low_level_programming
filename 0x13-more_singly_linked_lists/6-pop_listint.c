#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: Pointer to a pointer to the head of a list.
* Return: 0;
*/
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
	{
		listint_t *old_head = *head;

		data = old_head->n;
		*head = old_head->next;
		free(old_head);
	}
	return (data);
}
