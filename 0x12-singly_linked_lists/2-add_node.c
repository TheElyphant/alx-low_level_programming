#include "lists.h"
#include <string.h>
/**
* add_node -  adds a new node at the beginning of a list_t list.
* @head: start of the list.
* @str: string to be duplicared.
* Return: 0
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
