#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements
 * in a linked listint_t list.
 * @h: input value
 *
 * Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
