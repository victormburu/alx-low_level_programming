#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: input value
 *
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
