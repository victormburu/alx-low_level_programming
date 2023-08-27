#include "lists.h"
/**
 *  list_len - a function that returns number of elements linked list_t list
 *  @h: input value
 *
 *  Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
