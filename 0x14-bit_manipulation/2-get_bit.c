#include "main.h"
/**
 * get_bit - Gets the value of a specific bit in a given number.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve
 * (0-based, where 0 is the least significant bit).
 *
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int w;

	if (index > 63)
		return (-1);

	w =  (n >> index) & 1;

	return (w);
}
