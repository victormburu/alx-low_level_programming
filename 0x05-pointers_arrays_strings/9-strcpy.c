#include "main.h"
/**
 * _strcpy - copies the string pointed to by src  buffer pointed to by dest
 * @dest: pointer destination array where the content is to be copied
 * @src: string to be copied
 *
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
