#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: input value
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;
	int a;

	if (!b)
	{
		return (0);
	}

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		s = 2 * s + (b[a] - '0');
	}
	return (s);
}
