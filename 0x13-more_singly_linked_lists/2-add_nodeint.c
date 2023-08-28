#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  a function that adds a new node
 * at the beginning of a listint_t list
 * @head: input value
 * @n: input value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));
	if (start == NULL)
	{
		return (NULL);
	}
	start->n = n;
	start->next = *head;

	*head = start;
	return (start);
}
