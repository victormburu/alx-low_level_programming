#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * returns the head node’s data (n).
 * @head: input value
 *
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *gta;
	int a;

	if (*head == NULL)
		return (0);

	gta = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(gta);
	return (a);
}
