#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: This function prints the alphabet in lowercase
 * 10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
