#include "main.h"
/**
 * * _isalpha - checks if a character is alphabetic
 * @c: character to check
 *
 * Description: This function checks if the character c is alphabetic.
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
