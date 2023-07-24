#include "main.h"
/**
 *  puts2 -  prints every other character of a string,
 *  @str: starting with the first character, followed by a new line.
 *  return: succes
 */
void puts2(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a <= b; a++)
	{
		_putchar(str[a]);
	}
	putchar('\n');
}
