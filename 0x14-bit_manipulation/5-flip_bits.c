#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int t;
	unsigned long int e = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		t = e >> a;
		if (t & 1)
			c++;
	}
	return (c);
}
