#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: input integer
 * @n: it will use at most n bytes from src
 * @src: doesn't need to be null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
