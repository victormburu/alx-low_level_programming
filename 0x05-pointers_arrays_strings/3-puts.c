#include "main.h"
/**
 *  _puts -  function that prints a string
 *  @str: followed by new line to stdout
 *  Return: Always Success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
