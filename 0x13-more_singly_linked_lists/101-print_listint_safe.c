#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * looped_listint_len - counts the number of unique mode
 * in a lopped listint_t linked list
 * @head: input value
 *
 * Return: Always 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				nodes++;
				a = a->next;
			}
			return (nodes);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
 * rint_listint_safe - a function that prints a listint_t linked list.
 * @head: input value
 *
 * Returns: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
