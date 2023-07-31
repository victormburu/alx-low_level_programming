#include "main.h"
/**
 * _memset - memory with a constant byte.
 * @s: input value
 * @b: input value
 * @n: input value
 * Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);
}
