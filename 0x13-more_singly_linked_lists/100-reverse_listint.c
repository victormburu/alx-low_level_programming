#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: input value
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
