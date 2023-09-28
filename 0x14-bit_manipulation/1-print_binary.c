#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, c = 0;
	unsigned long int t;

	for (a = 63; a >= 0; a--)
	{
		t = n >> a;
		if (t & 1)
		{
			putchar('1');
			c++;
		}
		else if (c)
			putchar('0');
	}
	if (!c)
		putchar('0');
}
