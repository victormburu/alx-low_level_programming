#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: input avalue
 * @n: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *last;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	if (*head ==  NULL)
		*head = end;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end;
	}
	return (*head);
}
