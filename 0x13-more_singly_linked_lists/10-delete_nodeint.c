#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the node at the given index was not found.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		*head = (*head)->next;
	free(copy);
	return (1);

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
		{
			return (-1);
		}
		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (-1);
}
