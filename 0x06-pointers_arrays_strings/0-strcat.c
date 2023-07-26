#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @src: function appends the src string to the dest string,
 * @dest: overwriting the terminating null byte (\0) at the end of dest
 * Returns: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
