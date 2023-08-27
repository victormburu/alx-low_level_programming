#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - unction that adds a new node at the end of a list_t list.
 * @head: input value
 * @str: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t a;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (a = 0; str[a]; a++)
	{
		new_node->len = a;
		new_node->next = NULL;
		current_node = *head;

		if (current_node == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = new_node;
		}
	}
	return (*head);
}
