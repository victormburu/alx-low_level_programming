#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index at which the new node should be inserted.
 * @n: Value to be assigned to the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL if insertion fails.
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
