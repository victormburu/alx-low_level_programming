#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * at a given position.
 * @head: input value
 * @idx: input value
 * @n: input value
 *
 * Returns: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *start, *copy = *head;
	unsigned int node;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
	{
		return (NULL);
	}
	start->n = n;

	if (idx == 0)
	{
		start->next = copy;
		*head = start;
		return (start);
	}
	for  (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
		{
			return (NULL);
		}
		copy = copy->next;
	}
	start->next = copy->next;
	copy->next = start;

	return (start);
}
