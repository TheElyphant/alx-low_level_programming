#include "lists.h"
/**
* free_listint_safe - free_listint_safe.
* @h: pointer to a pointer.
* Return: 0
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t node_count = 0;
	int is_loop = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		while (*h != NULL)
		{
			listint_t *temp = *h;
			*h = (*h)->next;
			free(temp);
			node_count++;
		}
	}
	else
	{
		slow = *h;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		while (*h != fast)
		{
			listint_t *temp = *h;
			*h = (*h)->next;
			free(temp);
			node_count++;
		}
		*h = NULL;
		node_count++;
	}
	return (node_count);
}
