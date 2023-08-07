#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * initializes it with a specific char.
 * @size: input value
 * @c: input value
 * Return: Alaways 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
