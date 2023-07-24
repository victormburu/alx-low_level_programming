#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: followed by a new line.
 * Return: Success
 */
void print_rev(char *s)
{
	while (*s <= '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
