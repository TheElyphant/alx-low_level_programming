#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to a pointer to the head of a list.
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int current;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h - (*h)->next;
		if (current > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
