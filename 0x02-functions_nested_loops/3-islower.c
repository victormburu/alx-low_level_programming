#include "main.h"
/**
 ** _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Description: This function checks if the character c is lowercase.
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
