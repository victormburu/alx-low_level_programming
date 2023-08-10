#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: input value
 * @max: input value
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min) + sizeof(int)));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
