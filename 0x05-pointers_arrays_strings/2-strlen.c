#include "main.h"
/**
 *  _strlen - function that returns the of a string
 *  @s: the length of a string
 *  Return: the of @s
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
