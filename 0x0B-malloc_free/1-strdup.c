#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup -  a function returns a pointer to a newly allocated memory,
 * which contains a copy of the string given as a parameter.
 * @str: input value
 * Return: Always (Success)
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return (a);
}
