#include "main.h"
#include <unistd.h>
/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: input value
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int y, z = 0;

	for (y = 63; y >= 0; y--)
	{
		x = n >> 1;

		if (x & 1)
		{
			_putchar('1');
			z++;
		}
		else if (z)
			_putchar('0');
	}
	if (!z)
		_putchar('0');
}
